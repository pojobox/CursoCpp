#include <iostream>


int main()
{
	////reservar memoria para un solo numero
	//int* numero = new int; //Reserva memoria para un entero
	//*numero = 42;

	//std::cout << "Valor almacenado: " << *numero << std::endl;

	//delete numero; // libera la memoria


	//arreglo dinamico

	//int tamanio;

	//std::cout << "Ingrese el tamanio del arreglo: ";
	//std::cin >> tamanio;

	//int* arreglo = new int[tamanio];

	//for (int i = 0; i < tamanio; i++)
	//{
	//	std::cout << "Ingrese el valor " << i + 1 << ": ";
	//	std::cin >> arreglo[i];
	//}

	//std::cout << "Contenido del arreglo: ";
	//for (int i = 0; i < tamanio; i++)
	//{
	//	std::cout << arreglo[i] << " ";
	//}

	//delete[] arreglo; //libera toda la memoria del arreglo


	//Ejercicio 1: crear y mostrar un numero dinamico
	//pista: reservar memoria para un entero, pedir al usuario que lo ingrese, mostrarlo y luego liberar la memoria.
	/*int* numero = new int;

	std::cout << "Ingrese un numero: ";
	std::cin >> *numero;

	std::cout << "Numero ingresado: " << *numero << std::endl;

	delete numero;*/


	//Ejercicio 2: Arreglo dinamico con suma
	//pista: Crear un arreglo dinamico de n enteros ingresados por el usuario, mostarar la suma total y liberar la memoria.

	int n;

	std::cout << "Ingrese la cantidad de numeros: ";
	std::cin >> n;

	int* numeros = new int[n];
	int suma = 0;

	for (int i = 0; i < n; i++)
	{
		std::cout << "Numero " << i + 1 << ": ";
		std::cin >> numeros[i];
		suma += numeros[i];
	}

	std::cout << "Suma total: " << suma << std::endl;

	delete[] numeros;




	return 0;
}