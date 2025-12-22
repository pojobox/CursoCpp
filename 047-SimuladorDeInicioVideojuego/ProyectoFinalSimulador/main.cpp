#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <optional>
#include <future>
#include <chrono>
#include <thread>
#include <filesystem>
#include <mutex>
#include <atomic>
using namespace std;
namespace fs = std::filesystem;

/*
	Estructura general del programa
	1) Preparacion de assets
	Se crea si no existe la carpeta assets/ 
	Se generan archivos .pack (textures, sounds, shaders) si faltan.
	Esto simula que el juego tiene archivos reales en disco.

	2) Carga paralela (async)
	 Cada recurso se carga en una tarea std::async
	 Todas las tareas corren a la vez (Paralelismo)
	3) Barra de progreso total + spinner
	El main dibuja una barra en la misma linea con \r
	Mientras los hilos trabajan, va incrementandose un contador global atomico
	El main "mira" ese contador y dibuja el avance (0% -> 100%)
	4) Cierre
	future.get() espera que cada tarea termine
	Si algo falla -> error y salida
	Si todo esta OK -> Juego listo!
*/

mutex countMutex;
atomic<int> pasosCompletados{ 0 };

void safePrint(const string& msg)
{
	lock_guard<mutex> lock(countMutex);
	cout << "\n" << msg << endl;
}

void sleepMs(int ms)
{
	this_thread::sleep_for(chrono::milliseconds(ms));
}

bool ensureFile(const fs::path& p, const string& content)
{
	if (fs::exists(p)) return true;
	ofstream out(p, ios::out);
	if (!out.is_open()) return false;
	out << content;
	out.close();
	return true;
}

optional<uintmax_t> fileSizeSafe(const fs::path& p)
{
	if (!fs::exists(p)) return nullopt;
	error_code ec;
	auto s = fs::file_size(p, ec);
	if (ec) return nullopt;
	return s;
}

//Dibujar la barra de progreso total
void renderProgressBar(int done, int  total)
{
	const int barWidth = 30;
	int pct = (total > 0) ? (done * 100 / total) : 0;
	int fill = (pct * barWidth) / 100;


	lock_guard<mutex> lock(countMutex);

	cout << "\r[";

	for (int i = 0; i < barWidth; i++)
	{
		cout << (i < fill ? '#' : '-');
	}
	cout << "] " << pct << "% (" << done << "/" << total << ")    " << flush;
}

//Simulamos carga de un asset
bool loadAsset(const string& nombre, const fs::path& ruta, int pasos, int msPorPaso)
{
	auto sizeOpt = fileSizeSafe(ruta);
	if (!sizeOpt)
	{
		safePrint("X " + nombre + ": No se pudo acceder a " + ruta.string());
		return false;
	}

	//trabajo pesado
	for (int i = 1; i <= pasos; i++)
	{
		sleepMs(msPorPaso);
		pasosCompletados.fetch_add(1, memory_order_relaxed);
	}

	safePrint("OK " + nombre + " cargado (" + to_string(*sizeOpt) + " bytes)");
	return true;
}

int main()
{
	safePrint("======================================");
	safePrint("          Iniciando Game...");
	safePrint("======================================");

	//1) Preparamos carpeta de assets
	fs::path assetsDir = "assets";
	if (!fs::exists(assetsDir))
	{
		fs::create_directory(assetsDir);
		safePrint("Carpeta Creada: " + assetsDir.string());
	}
	else {
		safePrint("Carpeta encontrada: " + assetsDir.string());
	}

	//2) Aseguramos los assets
	struct AssetInfo {
		string nombre;
		fs::path ruta;
		string contenidoDummy;
		int pasos;
		int msPorPaso;
	};

	vector<AssetInfo> assets = {
		{"Texturas", assetsDir / "textures.pack", string(15000, 'T'), 6, 220},
		{"Sonidos", assetsDir / "sounds.pack", string(12000, 'S'), 5, 260},
		{"Shaders", assetsDir / "shaders.pack", string(8000, 'H'), 7, 180}
	};

	safePrint("\n Verificando Assets...");
	for (auto& a : assets) {
		if (!ensureFile(a.ruta, a.contenidoDummy)) {
			safePrint("X Error creando asset: " + a.ruta.string());
			return 1;
		}
		safePrint("Asset OK: " + a.ruta.string());
	}

	//Total de pasos para la barra (suma pasos de cada tarea)
	int totalPasos = 0;
	for (auto& a : assets) totalPasos += a.pasos;

	pasosCompletados.store(0, memory_order_relaxed);

	safePrint("\n Cargando recursos en paralelo...");
	safePrint("Progreso Total: ");

	//3) Lanzamos las tareas en paralelo
	auto f1 = async(launch::async, [&] {
		return loadAsset(assets[0].nombre, assets[0].ruta, assets[0].pasos, assets[0].msPorPaso);
		});

	auto f2 = async(launch::async, [&] {
		return loadAsset(assets[1].nombre, assets[1].ruta, assets[1].pasos, assets[1].msPorPaso);
		});

	auto f3 = async(launch::async, [&] {
		return loadAsset(assets[2].nombre, assets[2].ruta, assets[2].pasos, assets[2].msPorPaso);
		});

	//4) Loop de UI del main: dibujamos barra hasta finalizar
	while (pasosCompletados.load(memory_order_relaxed) < totalPasos)
	{
		int done = pasosCompletados.load(memory_order_relaxed);
		renderProgressBar(done, totalPasos);
		sleepMs(80);
	};

	//Render final de 100%
	renderProgressBar(totalPasos, totalPasos);
	{
		lock_guard<mutex> lock(countMutex);
		cout << "\n"; //Salto de linea luego de la barra
	}

	// 5) Esperamos los resultados
	bool ok1 = f1.get();
	bool ok2 = f2.get();
	bool ok3 = f3.get();

	if (!ok1 || !ok2 || !ok3)
	{
		safePrint("\n Error: No se pudieron cargar todos los recursos!");
		safePrint("Cerrando juego...");
		return 1;
	}

	safePrint("======================================");
	safePrint("Todo listo: Menu principal cargado.");
	safePrint("Juego listo para iniciar!!!");
	safePrint("======================================");

	safePrint("Gracias por haber finalizado este curso de C++ Nos vemos en el siguiente curso!!");
	return 0;
}