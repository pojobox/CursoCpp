#include <iostream>


/*
Declaracion de la funcion
tipo de retorno nombre de funcion(tipo parametro1, tipo parametro2)
{
	cuerpo de la funcion
	return valor; (si corresponde)
}

int main()
{
	nombre_funcion(argumentos);
}
*/

//definicion de la funcion
int sumar(int a, int b)
{
	return a + b;
	
}
/*
* Ejercicio 1:
	Funcion para calcular el cuadrado de un numero:
	objetivo: crear una funcion llamada cuadrado que reciba un numero entero y retorne su cuadrado, 
	luego en main pedir al usuario que ingrese un numero, llamar a la funcion y mostrar el resultado
*/
//definicion de funcion
int cuadrado(int num)
{
	return num * num;
}

/*
* Ejercicio 2:
*	Funcion para determinar si un numero es par o impar
*	Objetivo: crear una funcion llamada esPar que reciba un numero entero y retorne true si es par o false si es impar
*	luego en main, pedir un numero al usuario y mostrar si es par o impar
*/

//definicion de la funcion
bool esPar(int num)
{
	return num % 2 == 0;
}


int main()
{
	/*int resultado = sumar(5, 20);

	std::cout << "La suma es: " << resultado << std::endl;*/

	/*int numero;
	std::cout << "Por favor ingrese un numero entero: " << std::endl;

	std::cin >> numero;

	std::cout << "El cuadrado de: " << numero << " es: " << cuadrado(numero) << std::endl;*/

	int numero;
	std::cout << "Por favor ingrese un numero entero: " << std::endl;
	std::cin >> numero;

	if (esPar(numero))
	{
		std::cout << "El numero: " << numero << " Es par." << std::endl;
	}
	else
	{
		std::cout << "El numero: " << numero << " Es impar." << std::endl;
	}

	return 0;
}

