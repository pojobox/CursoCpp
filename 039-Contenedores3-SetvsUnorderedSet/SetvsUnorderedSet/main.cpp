//Ejemplo 1: Uso basico de set

#include <iostream>
#include <set>
#include <unordered_set>
#include <string>
using namespace std;

//int main()
//{
//	set<int> numeros = { 5,2,8,3,5 };
//
//	numeros.insert(10);
//	numeros.insert(2); // no se inserta porque ya exiaste.
//
//	cout << "Elementos ordenados: ";
//	for (int n : numeros)
//	{
//		cout << n << " ";
//	}
//	
//	cout << "\nTamanio: " << numeros.size() << endl;
//
//	if (numeros.find(9) != numeros.end()) {
//		cout << "El numero 3 esta en el conjunto. \n";
//	}
//	else {
//		cout << "El numero no esta en el conjunto. \n";
//	}
//		
//
//	return 0;
//}

//Ejemplo 2: Uso basico de unordered_set 

//int main()
//{
//
//	unordered_set<string> frutas = { "manzana", "pera","banana" };
//
//	frutas.insert("uva");
//	frutas.insert("manzana"); // no inserta por duplicado
//
//	
//	cout << "Frutas almacenadas\n";
//	for (auto& f : frutas) {
//		cout << " - " << f << endl;
//	}
//
//	if (frutas.count("frutilla"))
//	{
//		cout << "La banana esta presente";
//	}
//	else {
//		cout << "La fruta no esta presente";
//	}
//		
//
//	return 0;
//}

/*
	Ejercicio 1: Verificar duplicados
	Objetivo: Leer N numeros y detectar si hay duplicados usando set.
*/
//int main()
//{
//	set<int> numeros;
//	int N, x;
//	bool duplicado = false;
//
//
//	cout << "Ingrese cantidad de numeros: ";
//	cin >> N;
//
//	for (int i = 0; i < N; i++) {
//		cin >> x;
//		if (!numeros.insert(x).second) { // insert() devuelve pair <iterador, bool>
//			duplicado = true;
//		}
//	}
//
//	if (duplicado) {
//		cout << "Hay numeros duplicados. \n";
//	}
//	else {
//		cout << "Todos los numeros son unicos.\n";
//	}
//	return 0;
//}

/*
	Ejercicio 2: Filtrar palabras unicas con unordered_set
	Objetivo: Lerr una lista de palabras y mostrar solo las unicas (sin repetir).
*/

int main()
{
	unordered_multiset<string> palabras;
	string palabra;

	cout << "Ingrese palabras (fin para terminar):\n";
	while (cin >> palabra && palabra != "fin") {
		palabras.insert(palabra);
		
	}
	
	cout << "\nPalabras unicas:\n";
	for (auto& p : palabras) {

		cout << p << endl;
	}

	return 0;
}