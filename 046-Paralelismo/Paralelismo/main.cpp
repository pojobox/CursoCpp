//Ejemplo 1 - std:: async (ejecucion paralela simple)

#include <iostream>
#include <future>
#include <chrono>
#include <vector>
#include <algorithm>
#include <execution>
using namespace std;

//int tareaPesada()
//{
//	int suma = 0;
//	for (int i = 0; i < 100000000; i++)
//	{
//		suma += i;
//	}
//	return suma;
//}
//
//int main()
//{
//	cout << "Lanzando tarea en paralelo..." << endl;
//
//	future<int> resultado = async(launch::async, tareaPesada);
//
//	cout << "Haciendo otra cosa en main..." << endl;
//
//	cout << "Resultado: " << resultado.get() << endl;
//
//	return 0;
//}

//Ejemplo 2: std::future + wait()

//int tareaLenta()
//{
//	this_thread::sleep_for(chrono::seconds(2));
//	return 42;
//}
//
//int main()
//{
//	future<int> f = async(launch::async, tareaLenta);
//
//	cout << "Esperando resultado..." << endl;
//	f.wait(); // espera sin obtener el valor
//
//	cout << "Resultado: " << f.get() << endl;
//
//	return 0;
//}
//
//int main()
//{
//	vector<int> v(1000000, 1);
//
//	// suma secuencial
//	int suma1 = 0;
//	for (int n : v) suma1 += n;
//
//	//suma paralela
//	int suma2 = 0;
//	for_each(execution::par, v.begin(), v.end(),
//		[&](int n) {
//			suma2 += n;	//solo demostrativo
//		});
//
//	cout << "Suma secuencial: " << suma1 << endl;
//	cout << "Suma paralela (no segura): " << suma2 << endl;
//
//	return 0;
//}

/*
	Ejercicio 1: std:: async simple
	Objetivo:
	Funcion que espere 2 segundos
	Devuelva un numero
	Ejecutarla con std::async
	Mientras corre, el main imprime algo con una funcion aparte
	Al final mostrar el resultado
*/
//int tarea()
//{
//	this_thread::sleep_for(chrono::seconds(2));
//	return 123;
//}
//
//void otraFuncion() {
//
//	cout << "Imprimiendo desde otra funcion!" << endl;
//}
//
//int main()
//{
//	cout << "Lanzando tareas en paralelo...\n";
//
//	future<int> f = async(launch::async, tarea);
//
//	otraFuncion();
//
//	int resultado = f.get(); // espera hasta que termina
//	cout << "Resultado final: " << resultado << endl;
// 
//	return 0;
//}
/*
*	Ejercicio 2:Algoritmo paralelo (execution::par)
	Objetivo:
	Crear vector de 1.000.000 de numeros
	Usar for_each con execution::par
	Modificar valores (x2)
*/

int main()
{
	vector<int> v(1000000, 1); // 1 millon de 1s

	//Multiplicar por 2 en paralelo (seguro)
	for_each(execution::par, v.begin(), v.end(),
		[](int& n)
		{
			n *= 2;
		});

	cout << "Primer elemento: " << v[0] << endl; // deberia ser 2
	cout << "Ultimo elemento: " << v.back() << endl; // deberia ser 2
	return 0;
}