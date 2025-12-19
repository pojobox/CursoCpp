//Ejemplo 1 - Problema SIN mutex (race condition)
#include <iostream>
#include <thread>
#include <mutex>
#include <condition_variable>
#include <chrono>
using namespace std;

//
//int contador = 0;
//
//void incrementar()
//{
//	for (int i = 0; i < 100000; i++)
//	{
//		contador++;
//	}
//}
//
//int main()
//{
//	thread t1(incrementar);
//	thread t2(incrementar);
//
//	t1.join();
//	t2.join();
//
//	cout << "Contador final: " << contador << endl;
//
//	return 0;
//}

//Ejemplo 2 - Solucion con mutex

//
//int contador = 0;
//mutex m;
//
//void incrementar() {
//	for (int i = 0; i < 100000; i++)
//	{
//		lock_guard<mutex> lock(m);
//		contador++;
//	}
//}
//
//int main()
//{
//	thread t1(incrementar);
//	thread t2(incrementar);
//
//	t1.join();
//	t2.join();
//
//	cout << "Contador final: " << contador << endl;
//
//	return 0;
//}

//Ejemplo 3 - Uso de contidion_variable (productor / consumidor)

//
//mutex m;
//condition_variable cv;
//bool listo = false;
//
//void productor()
//{
//	this_thread::sleep_for(chrono::seconds(2));
//
//	lock_guard<mutex> lock(m);
//	listo = true;
//	cout << "Productor: dato listo\n";
//
//	cv.notify_one();
//}
//
//void consumidor()
//{
//	unique_lock<mutex> lock(m);
//	cv.wait(lock, [] { return listo; });
//
//	cout << "Consumidor: dato recibido\n";
//}
//
//int main()
//{
//	thread t1(consumidor);
//	thread t2(productor);
//
//	t1.join();
//	t2.join();
//
//	return 0;
//}

/*
	Ejercicio 1: Contador protegido con mutex
	Objetivo: 
	Contador global
	2 hilos incrementan 50.000 veces cada uno
	Proteger con mutex
	Mostrar valor final (esperado: 100000)
*/
//int contador = 0;
//mutex m;
//
//void incrementar()
//{
//	for (int i = 0; i < 50000; i++)
//	{
//		lock_guard<mutex> lock(m); // bloquea y libera automaticamente
//		contador++;
//	}
//}
//
//int main()
//{
//	thread t1(incrementar);
//	thread t2(incrementar);
//
//	t1.join();
//	t2.join();
//
//	cout << "Contador final: " << contador << endl; //esperado 100000
//
//	return 0;
//}
/*
	Ejercicio 2: Mensajes sincronizados con condition_variable
	Objetivo:
	Hilo 1 imprime "Esperando..." y bloquea (wait)
	Hilo 2 espera 2 segundos, imprime "Listo!" y despierta al hilo 1 (notify)
	pista: usar mutex + condition_variable
*/

mutex m;
condition_variable cv;
bool listo = false;

void hiloEsperar()
{
	cout << "Esperando..." << endl;

	unique_lock<mutex> lock(m);
	cv.wait(lock, [] { return listo; });// espera hasta que listo sea true

	cout << "Hilo 1: Continuando, ya esta listo!" << endl;
}

void hiloListo()
{
	this_thread::sleep_for(chrono::seconds(2));
	{
		lock_guard<mutex> lock(m);
		listo = true;
		cout << "Listo!" << endl;

	}

	cv.notify_one();// despierta al hilo que esta esperando
}

int main()
{
	thread t1(hiloEsperar);
	thread t2(hiloListo);

	t1.join();
	t2.join();

	return 0;
}