//Ejemplo 1: Uso basico de lambda con tipo explicito

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//int main()
//{
//	vector<int> numeros = { 1, 2, 3, 4, 5 };
//
//	cout << "Elementos mayores que 3: ";
//	for_each(numeros.begin(), numeros.end(), [](int n) -> void {
//		if (n > 3) {
//			cout << n << " ";
//		}
//		});
//	return 0;
//
//}

//Ejemplo 2 : Captura de variables (por referencia) con tipo explicito

//int main()
//{
//	vector<int> numeros = { 2, 4, 6 , 8, 10 };
//
//	int contador = 0;
//
//	for_each(numeros.begin(), numeros.end(), [&contador](int n) -> void {
//		if (n % 4 == 0) {
//			contador++;
//		}
//		});
//	
//	cout << "Cantidad de multiplos de 4: " << contador << endl;
//
//	return 0;
//}
// sin especificar tipo de retorno
//int main()
//{
//	vector<int> numeros = { 2, 4, 6 , 8, 10 };
//
//	int contador = 0;
//
//	for_each(numeros.begin(), numeros.end(), [&contador](int n){
//		if (n % 4 == 0) {
//			contador++;
//		}
//		});
//
//	cout << "Cantidad de multiplos de 4: " << contador << endl;
//
//	return 0;
//}

/*
	Ejercicio 1: Filtrar numeros pares (retorno booleano explicito)
	Objetivo: Crea un vector de enteros y usa copy_if con una lambda para copiar los numeros pares a otro vector y mostrarlos por pantalla
*/
//int main()
//{
//	vector<int> numeros = { 1, 2, 3, 4, 5, 6, 7, 8 };
//	vector<int> pares;
//
//	copy_if(numeros.begin(), numeros.end(), back_inserter(pares), [](int n) -> bool {return n % 2 == 0;});
//
//	cout << "Numeros pares: ";
//	for (int n : pares)
//	{
//		cout << n << " ";
//	}
//
//	return 0;
//}

/*
	Ejercicio 2:Ordenar una lista de personas
	Objetivo: Crea una estructura Persona con nombre y edad, guarda varias en un vector y ordenalas por edad usando sort con una lambda.
*/

struct Persona {
	string nombre;
	int edad;
};

int main()
{
	vector<Persona> personas = {
		{"Lucas", 25},
		{"Juan", 32},
		{"Pedro", 30}
	};

	sort(personas.begin(), personas.end(), [](const Persona& a, const Persona& b) -> bool {
		return a.edad < b.edad;
		});
		
	cout << "Personas ordenadas por edad: \n";
	for (const auto& p : personas) {
		cout << p.nombre << " - " << p.edad << " Anios\n";
	}

	return 0;
}