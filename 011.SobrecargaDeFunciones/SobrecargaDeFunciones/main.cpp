#include <iostream>

//Sobrecarga con diferente numero de parametros

//Funcion para sumar dos numeros
int sumar(int a, int b)
{
	return a + b;
}

//Funcion para sumar tres numeros
int sumar(int a, int b, int c)
{
	return a + b + c;
}


//Sobrecarga con diferentes tipos de parametros

//Funcion para calcular el area de un cuadrado

int calcularArea(int lado)
{
	return lado * lado;
}

//Funcion para calcular el area de un rectangulo

int calcularArea(int base, int altura)
{
	return base * altura;
}

//Ejercicios practicos
//Ejercicio 1: Sobrecarga de una funcion para mostrar informacion
/*
	Objetivo:
	Crear una funcion mostrarDatos() que pueda recibir un numero entero y mostrarlo en pantalla y otra version que reciba dos numeros enteros y los muestre juntos.

	Ejemplo de salida esperada:
	Numero: 10
	Numeros: 10 y 20
*/

//Funcion para mostrar un numero entero
void mostrarDatos(int num)
{
	std::cout << "Numero: " << num << std::endl;
}

//Funcion para mostrar dos numeros enteros
void mostrarDatos(int num1, int num2)
{
	std::cout << "Numeros: " << num1 << " y " << num2 << std::endl;
}


//Ejercicio 2: Sobrecarga de una funcion para multiplicar numeros
/*
	Objetivo:
	Crear una funcion multiplicar() que reciba dos numeros enteros y devuelva su producto.
	Luego, crear otra version que reciba un numero entero y un decimal, devolviendo su producto como decimal

	Ejemplo de salida esperada:
	Multiplicacion de enteros: 4 * 5 = 20
	Multiplicacion de entero y decimal 4 * 2.5 = 10.0

	*/

//Funcion para multiplicar dos numeros enteros
int multiplicar(int a, int b)
{
	return a * b;
}

//Funcion para multiplicar un entero y un decimal
double multiplicar(int a, double b)
{
	return a * b;
}



int main()
{

	//std::cout << "LLamada a la funcion de sumar 2 numeros: " << sumar(5, 10) << std::endl; // Funcion sumar 2 numeros

	//std::cout << "LLamada a la funcion de sumar 3 numeros: " << sumar(5, 10, 20) << std::endl; // Funcion sumar 3 numeros


	//std::cout << "Area del cuadrado: " << calcularArea(5) << std::endl; // llama a calcularArea(int)

	//std::cout << "Area del rectangulo: " << calcularArea(5,10) << std::endl; // llama a calcularArea(int,int)

	mostrarDatos(5);
	mostrarDatos(5, 10);

	std::cout << "Multiplicacion entera: " << multiplicar(5, 4) << std::endl;

	std::cout << "Multiplicacion decimal: " << multiplicar(4, 2.6) << std::endl;


	return 0;
}