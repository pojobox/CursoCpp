//Ejemplo 1: Crear un archivo y leerlo
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

//int main()
//{
//	string linea; //variable aux
//
//	ofstream salida("datos.txt"); //Creamos el archivo y lo abrimos en modo escritura
//	salida << "Creando un archivo\n"; //Escribimos en el archivo
//	salida.close();
//
//	ifstream entrada("datos.txt"); // Abrimos en modo lectura
//	cout << "Contenido: \n";
//	while(getline(entrada, linea))
//	{
//		cout << linea << endl;
//	}
//
//	return 0;
//}

//Ejemplo 2: Comprobar si existe un archivo

//int main()
//{
//
//	ifstream f("datoss.txt");
//	if (f.is_open())
//	{
//		cout << "El archivo existe.\n";
//	}
//	else
//	{
//		cout << "El archivo NO existe.\n";
//	}
//
//	return 0;
//}

/*
	Ejercicio 1: Comprobacion si un archivo existe en una ruta en concreto C:/Users/jonas/Desktop/
	Objetivo: Abrir o crear el archivo segun corresponda. Luego verificar mediante el metodo is_open() 
	si el archivo se pudo abrir correctamente (lo cual en la practica, indica que existe y es accesible).
	Si se abre correctamente, mostrar en consola que el archivo existe.
	Si no se puede abrir, crearlo y escribir un texto inicial en la ruta indicada.
	Finalmente, leer el archivo y mostrar su contenido, exista o no desde el inicio.
*/
//int main()
//{
//	string ruta = "C:/Users/jonas/Desktop/";
//	string archivo = "datos.txt";
//	string rutaCompleta = ruta + archivo;
//
//	ifstream f(rutaCompleta);
//	if (f.is_open())
//	{
//		cout << "El archivo: " << archivo << " existe.\n";
//	}
//	else {
//		cout << "El archivo: " << archivo << " NO existe!\n";
//		ofstream salida(rutaCompleta);
//		salida << "Creando un archivo desde c++\n"; 
//		cout << "Archivo creado exitosamente!\n\n";
//		salida.close();
//	}
//
//	f.close();
//	ifstream entrada(rutaCompleta);
//	string linea;
//	cout << "Contenido: " << endl;
//	while (getline(entrada, linea))
//	{
//		cout << linea << endl;
//	}
//
//	return 0;
//}
/*
	Ejercicio 2:Agregar entradas a un archivo existente.
	Objetivo: Comprobar si un archivo existe intentando abrirlo con ifstream.
	Si no existe, crearlo y escribir una primera entrada.
	Si existe, abrirlo en modo append (ios::app) y agregar una nueva entrada al final.
	Finalmente, leer y mostrar todo su contenido, sin importar si el archivo ya existia o fue creado durante el programa.
*/

int main()
{
	string archivo = "datos.txt";
	string linea;

	//1 Verificamos si existe
	ifstream f(archivo);
	bool existe = f.is_open();
	f.close();

	// 2 Crear o agregar
	ofstream salida;
	if (!existe)
	{
		cout << "El archivo no existe. Creando...\n";
		salida.open(archivo);
		salida << "Primera entrada.";
	}
	else
	{
		cout << "El archivo existe. Agregando entrada...\n";
		salida.open(archivo, ios::app); //modo append
		salida << "Nueva entrada.";
	}
	salida.close();

	//3 Leer y mostrar
	ifstream entrada(archivo);
	cout << "\nContenido actual del archivo:\n";
	while (getline(entrada, linea))
	{
		cout << linea << endl;
	}
	entrada.close();

	return 0;
}