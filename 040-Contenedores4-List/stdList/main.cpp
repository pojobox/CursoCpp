//Ejemplo 1: Ejemplo basico de list

#include <iostream>
#include <list>
#include <string>
using namespace std;
//
//int main()
//{
//	list<int> numeros = { 10, 20, 30 };
//
//	//push front / back
//	numeros.push_front(5);
//	numeros.push_back(40);
//
//	cout << "Contenido de la lista: ";
//	for (int n : numeros)
//	{
//		cout << n << " ";
//	}
//
//	//pop front /back
//	numeros.pop_front();
//	numeros.pop_back();
//
//	cout << "\nLista tras eliminar extremos: ";
//	for (int n : numeros)
//	{
//		cout << n << " ";
//	}
//	cout << endl;
//
//	return 0;
//}

//Ejemplo 2: Uso de sort, unique y remove

//int main()
//{
//	list<int> numeros = { 5, 3, 8, 3, 2, 8, 5 };
//
//	numeros.sort();
//	//numeros.unique(); // elimina duplicados consecutivos
//
//	cout << "Lista ordenada y sin duplicados: ";
//	for (int n : numeros)
//	{
//		cout << n << " ";
//	}
//	
//	numeros.remove(5); // elimina todos los 5
//	numeros.unique();
//	cout << "\nTras eliminar el 5: ";
//	for (int n : numeros)
//	{
//		cout << n << " ";
//	}
//	cout << endl;
//
//	return 0;
//}

/*
	Ejercicio 1: Lista de nombres
	Objetivo: Leer varios nombres y mostrarlos ordenados alfabeticamente , sin duplicados.
*/

//int main()
//{
//	list<string> nombres;
//	string nombre;
//
//	cout << "Ingrese nombres,(fin para terminar):\n";
//	while (cin >> nombre && nombre != "fin")
//		nombres.push_back(nombre);
//
//	nombres.sort();
//	nombres.unique();
//
//	cout << "\nNombres ordenados y sin duplicados: \n";
//	for (auto& n : nombres)
//	{
//		cout << n << endl;
//	}
//	return 0;
//}
/*
	Ejercicio 2: Insertar y eliminar por posicion
	Objetivo: Crear una lista de enteros, insertar un numero en la tercera posicion y eliminar el segundo elemento(con advance)
*/

int main()
{
	list<int> numeros = { 10, 20, 30, 40, 50 };

	auto it = numeros.begin();
	advance(it, 2); // mover el iterador a la tercera posicion
	numeros.insert(it, 25); // inserta antes del 30

	it = numeros.begin();
	advance(it, 1); //apunta al segundo elemento
	numeros.erase(it); // elimina el segundo elemento

	cout << "Lista final: ";
	for (int n : numeros)
	{
		cout << n << " ";
	}
	cout << endl;

	return 0;
}