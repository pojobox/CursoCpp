//Ejemplo 1: Guardar un entero en binario y leerlo
#include<fstream>
#include<iostream>
using namespace std;
#include <cstring>

//int main()
//{
//	ofstream out("numero.bin", ios::binary);
//	int valor = 987;
//	out.write((char*)&valor, sizeof(valor));
//	out.close();
//
//	ifstream in("numero.bin", ios::binary);
//	int leido;
//	in.read((char*)&leido, sizeof(leido));
//	in.close();
//
//	cout << "Valor leido: " << leido << endl;
//
//
//	return 0;
//}

//Ejemplo 2: Guardar struct completo
//struct Producto
//{
//
//	char nombre[20];
//	float precio;
//};
//
//int main()
//{
//	Producto p = { "Gaseosa", 250.5f };
//
//	ofstream out("prod.bin", ios::binary);
//	out.write((char*)&p, sizeof(p));
//	out.close();
//
//	Producto p2;
//	ifstream in("prod.bin", ios::binary);
//	in.read((char*)&p2, sizeof(p2));
//	in.close();
//
//	cout << "Producto: " << p2.nombre << " -$" << p2.precio << endl;
//
//	return 0;
//}

/*
Ejerccio 1: Guardar 5 enteros en binario y leerlos
Objetivo: Crear un archivo binario
Guardar 5 enteros en un array
Leerlos uno por uno
Mostrar resultado en pantalla
*/
//int main()
//{
//	// array con 5 enteros
//	int numeros[5] = { 10, 20, 30, 40, 50 };
//
//	//Escribir el array en un archivo binario
//	ofstream out("enteros.bin", ios::binary);
//	if (!out.is_open()) {
//		cout << "No se pudo abrir el archivo para escritura.\n";
//		return 1;
//	}
//
//	//Escribimos los enteros
//	out.write((char*)numeros, sizeof(numeros));
//	out.close();
//
//	//Leer los enteros desde el archivo
//	ifstream in("enteros.bin", ios::binary);
//	if (!in.is_open())
//	{
//		cout << "No se pudo abrir el archivo para lectura.\n";
//		return 1;
//	}
//
//	int leidos[5];
//	in.read((char*)leidos, sizeof(leidos));
//	in.close();
//
//	//Mostramos el resultado
//	cout << "Numeros leidos desde el archivo: \n";
//	for (int i = 0; i < 5; i++)
//	{
//		cout << leidos[i] << endl;
//	}
//	return 0;
//}
/*
Ejercicio 2:Guardar un struct de Usuario
"struct Usuario {
	char username[15];
	int nivel;
}"
Guardar en un archivo binario user.dat
Luego leerlo y mostrar:
Usuario: <nombre> - Nivel <nivel>
*/

struct Usuario {
	char username[15];
	int nivel;
};

int main()
{
	//Crear usuario y asignar datos
	Usuario u;

	//Cargamos el nombre sin espacios y el nivel
	strcpy_s(u.username, "Juan");
	u.nivel = 10;

	//guardar el usuario en user.dat
	ofstream out("user.dat", ios::binary);
	if (!out.is_open())
	{
		cout << "No se pudo abrir user.dat en escritura.\n";
		return 1;
	}

	out.write((char*)&u, sizeof(u));
	out.close();

	Usuario u2;
	ifstream in("user.dat", ios::binary);
	if (!in.is_open())
	{
		cout << "No se pudo abrir user.dat para lectura.\n";
		return 1;
	}

	in.read((char*)&u2, sizeof(u2));
	in.close();

	//Mostrar resultado
	cout << "Usuario: " << u2.username << " -Nivel: " << u2.nivel << endl;
	return 0;
}