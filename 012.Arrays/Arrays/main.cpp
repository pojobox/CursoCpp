#include <iostream>


/*
	Ejemplo 1: array unidimensional
	Un arreglo de enteros que almacena 5 numeros y los imprime en pantalla
*/

/*
	Ejemplo 2 : array bidimensional (matriz)
	Una matriz 2x3 que almacena valores y los muestra en pantalla
*/


/*
	Ejercicio 1: Suma de los elementos de un array
	objetivo: crear un programa que use un arreglo unidimensional para almacenar 5 numeros y calcular su suma
	ejemplo de salida esperada:
	Ingrese 5 numeros:
	10 20 30 40 50
	La suma de los numeros es : 150
*/



/*
	Ejercicio2: Matriz transpuesta
	Objetivo: crear un programa que almacene una matriz de 3x3 e imprima su transpuesta es decir(intercambiar filas por columnas)
	Ejemplo de salida esperada:
	Matriz original:
	1 2 3
	4 5 6
	7 8 9

	Matriz transpuesta: 
	1 4 7
	2 5 8
	3 6 9
*/


int main()
{
	//int numeros[5] = { 10, 20, 30, 40, 50 };

	//int matriz[2][3] = {
	//	{1,2,3},
	//	{4,5,6}

	//};


	////Recorremos el arreglo con for
	//for (int i = 0; i < 5; i++)
	//{
	//	std::cout << "Elemento en posicion: " << i << " : " << numeros[i] << std::endl;
	//}

	//recorrer matriz con for anidados
	//for (int i = 0; i < 2; i++)
	//{
	//	for (int j = 0; j < 3; j++)
	//	{
	//		std::cout << matriz[i][j] << " ";
	//	}

	//	std::cout << std::endl;
	//	
	//}


	//Ejercicio1
	//int numeros[5]; //Array
	//int suma = 0;

	//std::cout << "Ingrese 5 numeros: " << std::endl;

	////leer los 5 numeros y sumarlos
	//for (int i = 0; i < 5; i++)
	//{
	//	std::cin >> numeros[i];
	//	suma += numeros[i]; //acumulamos la suma
	//}

	////mostrar la suma total
	//std::cout << "La suma de los numeros es: " << suma << std::endl;

	//Ejercicio2
	int matriz[3][3];

	std::cout << "Ingrese los 9 elementos de la matriz de 3x3: " << std::endl;

	//Leer la matriz
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			std::cin >> matriz[i][j];
		}
	}

	//Mostrar la matriz original
	std::cout << "\nMatriz original: " << std::endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			std::cout << matriz[i][j] << " ";
		}
		std::cout << std::endl;
	}

	std::cout << "\nMatriz transpuesta: " << std::endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			std::cout << matriz[j][i] << " ";
		}
		std::cout << std::endl;
	}


	return 0;
}