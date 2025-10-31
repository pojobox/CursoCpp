#include <iostream>
#include <map>
#include <unordered_map>
#include <string>
using namespace std;

//Ejemplo 1 : Uso basico de map

//int main()
//{
//	map<string, int> edades;
//
//	edades["Juan"] = 25;
//	edades["Ana"] = 30;
//	edades["Jonathan"] = 32;
//
//	for (auto& par : edades)
//	{
//		cout << par.first << " tiene " << par.second << " anios." << endl;
//	}
//
//	cout << "Edad de Ana: " << edades["Ana"] << endl;
//
//
//
//
//	return 0;
//}

//Ejemplo 2: Uso basico de unordered_map

//int main()
//{
//	unordered_map<string, string> paises;
//
//	paises["AR"] = "Argentina";
//	paises["CL"] = "Chile";
//	paises["BR"] = "Brasil";
//
//	for (auto& par : paises)
//	{
//		cout << par.first << " -> " << par.second << endl;
//	}
//
//	if (paises.find("CL") != paises.end())
//	{
//		cout << "Se encontro: " << paises["CL"] << endl;
//	}
//
//	return 0;
//}

/*
Ejercicio 1: Contador de palabras con map
Objetivo: Contar cuantas veces aparece cada palabra en una lista
*/
//int main()
//{
//	map<string, int> contador;
//	string palabra;
//
//	cout << "Ingrese palabras (fin para terminar): \n";
//	while (cin >> palabra && palabra != "fin")
//	{
//		contador[palabra]++;
//	}
//	cout << "\nFrecuencia de palabras: \n";
//	for (auto& p : contador)
//	{
//		cout << p.first << ": " << p.second << endl;
//	}
//	return 0;
//}
/*
	Ejercicio 2: Agenda telefonica con unordered_map
	Objetivo: Crear una agenda con nombres y numeros. Permitir buscar por nombre.
*/

int main()
{
	unordered_map<string, string> agenda;

	agenda["Juan"] = "1234-5678";
	agenda["Lucia"] = "4321-8765";
	agenda["Pedro"] = "5555-2222";

	string nombre;
	cout << "Ingrese un nombre: ";
	cin >> nombre;

	if (agenda.find(nombre) != agenda.end())
	{
		cout << "Telefono: " << agenda[nombre] << endl;
	}
	else
	{
		cout << "No se encontro el contacto." << endl;
	}
	return 0;
}