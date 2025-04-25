#include <iostream>

/*
		Ejercicio 1: Intercambiar valores con punteros
		Objetivo: Escribir una funcion intercambiar() que reciba dos punteros a enteros y los intercambie
		Pista: llamada de la funcion intercambiar(&x, &y);
	*/
void intercambiar(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

/*
	Ejercicio 2: Sumar usando punteros
	Objetivo: Escribir una funcion que reciba dos punteros a enteros, sume sus valores y devuelva el resultado
	Pista: llamada de la funcion sumar(&num1......)
*/

int sumar(int* a, int* b)
{
	return *a + *b;
}

int main()
{

	//puntero apuntando a variable

	/*int edad = 25;
	int* ptrEdad = &edad;

	std::cout << "Valor de la edad: " << edad << std::endl;
	std::cout << "Direccion de la edad: " << &edad << std::endl;
	std::cout << "Valor almacenado en el ptrEdad: " << ptrEdad << std::endl;
	std::cout << "Valor desreferenciado del ptrEdad: " << *ptrEdad << std::endl;*/


	// modificar una variable usando su puntero

	/*int numero = 10;
	int* ptr = &numero;

	std::cout << "Antes: " << numero << std::endl;
	*ptr = 20;
	std::cout << "Despues: " << numero << std::endl;*/

	//Ejercicio 1 resolucion

	/*int x = 5;
	int y = 10;

	std::cout << "Antes del intercambio x = " << x << ", y = " << y << std::endl;

	intercambiar(&x, &y);

	std::cout << "Despues del intercambio x = " << x << ", y = " << y << std::endl;*/
	
	//Ejercicio 2 resolucion
	int num1 = 7;
	int num2 = 3;

	int resultado = sumar(&num1, &num2);

	std::cout << "La suma es: " << resultado << std::endl;

	return 0;
}