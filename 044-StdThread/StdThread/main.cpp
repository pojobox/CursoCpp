//Ejemplo 1: Primer hilo con std::thread

#include <iostream>
#include <thread>
#include <chrono>
using namespace std;

//void funcionHilo()
//{
//	cout << "Hola desde el hilo secundario!" << endl;
//}
//
//int main()
//{
//	cout << "Inicio del programa(hilo principal)" << endl;
//
//	//Creamos un hilo que ejecute funcionHilo
//	thread t(funcionHilo);
//
//	//Esperamos que el hilo termine
//	t.join();
//
//	cout << "Fin del programa (Hilo principal)" << endl;
//
//	return 0;
//}

//Ejemplo 2: Hilo con parametros
//void contarHasta(int n)
//{
//	for (int i = 1; i <= n; i++) {
//		cout << "Hilo contando: " << i << endl;
//	}
//}
//
//int main()
//{
//	cout << "Lanzando hilo que cuenta hasta 5..." << endl;
//
//	thread t(contarHasta, 5);
//
//	t.join();
//
//	cout << "Hilo finalizado." << endl;
//
//	return 0;
//}

//Ejemplo 3: Uso de sleep_for (simular trabajo)

//void tareaLenta(string nombre)
//{
//	for (int i = 1; i <= 5; i++)
//	{
//		cout << nombre << " paso " << i << endl;
//		this_thread::sleep_for(chrono::milliseconds(500));	//0.5 segundos
//	}
//}
//
//int main() 
//{
//	cout << "Iniciando dos hilos..." << endl;
//
//	thread t1(tareaLenta, "Hilo 1");
//	thread t2(tareaLenta, "Hilo 2");
//
//	//Esperamos los dos hilos
//	t1.join();
//	t2.join();
//
//	cout << "Ambos hilos terminaron." << endl;
//
//	return 0;
//}

//Ejemplo 4: Hilo con lambda
//
//int main()
//{
//	thread t([]()
//		{
//			for (int i = 0; i < 3; i++)
//			{
//				cout << "Hola desde lambda en un hilo" << endl;
//				this_thread::sleep_for(chrono::milliseconds(400));
//			}
//		});
//	t.join();
//	cout << "Hilo lambda terminado." << endl;
//}

/*
	Ejercicio 1: Hilo con mensajes repetidos
	Objetivo: Crear un hilo que imprima "Trabajando..." 5 veces,
	Entre cada impresion, el hilo debe esperar 500ms.
	El hilo principal debe esperar a que el hilo termine usando join().
*/
//void trabajo()
//{
//	for (int i = 0; i < 5; i++)
//	{
//		cout << "Trabajando..." << endl;
//		this_thread::sleep_for(chrono::milliseconds(500)); // pausa de 500ms
//	}
//}
//
//int main()
//{
//	thread t(trabajo); // lanzamos el hilo
//
//	t.join(); // esperamos que termine
//
//	cout << "Hilo finalizado." << endl;
//
//	return 0;
//}
/*
	Ejercicio 2: Varios hilos simples
	Objetivo: Crear 3 hilos distintos.
	Cada hilo imprime una letra diferente (por ejemplo: A, B, C) 10 veces.
	El hilo principal debe hacer join() con los 3 hilos.
	Observa como se intercalan las salidas

	Pista: usa una funcion: void imprimirLetra(char c);
*/

void imprimirLetra(char letra)
{
	for (int i = 0; i < 10; i++)
	{
		cout << letra << " ";
	}
}

int main()
{
	//Creamos los 3 hilos
	thread t1(imprimirLetra, 'A');
	thread t2(imprimirLetra, 'B');
	thread t3(imprimirLetra, 'C');

	//Esperamos que todos terminen
	t1.join();
	t2.join();
	t3.join();

	cout << "\nTodos los hilos terminaron." << endl;

	return 0;
}