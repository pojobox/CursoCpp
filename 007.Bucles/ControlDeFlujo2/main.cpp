#include <iostream>

int main()
{
	//For loop
	// imprimir los numeros del 1 a 10

	/*for (int i = 1; i <= 10; i++)
	{
		std::cout << i << std::endl;
	}*/


	//While loop
	//Pedir un numero mayor a 10

	/*int num;
	std::cout << "Ingrese un numero mayor a 10: ";
	std::cin >> num;

	while (num <= 10)
	{
		std::cout << "Numero invalido. Intente de nuevo: ";
		std::cin >> num;
	}

	std::cout << "Numero aceptado!: " << num << std::endl;*/


	//do-while
	//pedir numero mayor a 10 (minimo una vez)

	/*int num;
	do
	{
		std::cout << "Ingrese un numero mayor a 10: ";
		std::cin >> num;
	} while (num <= 10);

	std::cout << "Numero aceptado!: " << num << "\n";*/

	//Break sale del bucle
	// salir del bucle si el numero es 0

	//int num;
	//while (true)// bucle infinito
	//{
	//	std::cout << "Ingrese un numero(0 para salir): ";
	//	std::cin >> num;

	//	if (num == 0)
	//		break; // sale del bucle
	//}

	//std::cout << "Fin del programa. \n";


	//Continue salta la iteracion actual
	//Imprimir los numeros impares del 1 al 10.

	/*for (int i = 1; i <= 10; i++)
	{
		if (i % 2 == 0)
			continue;

		std::cout << i << std::endl;
	}*/

	//goto
	//salto con goto

//	int num;
//
//repetir:
//	std::cout << "Ingrese un numero positivo: ";
//	std::cin >> num;
//
//	if (num < 0)
//	{
//		goto repetir;//vuelve a pedir el numero
//	}
//
//	std::cout << "Numero aceptado: " << num << std::endl;

	//Ejercicio
	//Calculadora basica
	//Objetivo:
	//Pedir dos numeros y una operacion (+, - , *, /).
	//Mostrar el resultado
	//repetir hasta que el usuario quiera salir
	//reto adicional: no se debe poder dividir por cero (error!!!).

	char opcion;
	do
	{
		double num1, num2, resultado;
		char operacion;

		std::cout << "Ingrese el primer numero: ";
		std::cin >> num1;
		std::cout << "Ingrese la operacion (+, -, *, /): ";
		std::cin >> operacion;
		std::cout << "Ingrese el segundo numero: ";
		std::cin >> num2;

		switch (operacion)
		{
		case '+':
			resultado = num1 + num2;
			break;
		case '-':
			resultado = num1 - num2;
			break;
		case '*':
			resultado = num1 * num2;
			break;
		case '/':
			if (num2 != 0)
				resultado = num1 / num2;
			else
			{
				std::cout << "Error: no se puede dividir por cero. \n";
				continue; // salta la iteracion sin mostrar resultado
			}
			break;
		default:
			std::cout << "Operacion invalida. \n";
			break;
		}

		std::cout << "Resultado: " << resultado << std::endl;

		std::cout << "¿Desea realizar otra opreracion? (s/n): ";
		std::cin >> opcion;

	} while (opcion == 's' || opcion == 'S');

	std::cout << "Gracias por utilizar la calculadora! \n";

	return 0;
}