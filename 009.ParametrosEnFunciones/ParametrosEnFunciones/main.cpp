#include <iostream>

//declaramos la funcion void
void mostrarMensaje()
{
	std::cout << "Bienvenidos a la clase de parametros en funciones!" << std::endl;
}


//declaramos la funcion con parametros por valor (copia)
//void duplicar(int num)
//{
//	num = num * 2; //no modifica el valor original.
//	std::cout << "Hola soy: " << num << " Desde la funcion duplicar. " << std::endl;
//}

//declaramos la funcion con parametros por referencia (original)
//void duplicar(int &num)
//{
//	num = num * 2; //no modifica el valor original.
//	std::cout << "Hola soy: " << num << " Desde la funcion duplicar. " << std::endl;
//}

//Ejercicio 1: Intercambiar dos numeros (swap)
/*
	Crear una funcion llamada intercambiar que reciba dos numeros por referencia y los intercambie, luego probala en main()
*/
void intercambiar(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}


//Ejercicio 2: Incrementar numero en 1
/*
	Crear una funcion que se llame incrementar que reciba un numero por referencia y lo aumente en 1.
*/

void incrementar(int& a)
{
	a++;
}

int main()
{

	//mostrarMensaje();

	//llamada a la funcion duplicar por valor

	/*int numero = 5;
	duplicar(numero);
	std::cout << "El valor del numero despues de llamar a la funcion es: " << numero << std::endl;*/

	//llamada a la funcion por referencia.
	/*int numero = 5;
	duplicar(numero);
	std::cout << "El valor del numero despues de llamar a la funcion es: " << numero << std::endl;*/

	/*int num1 = 10;
	int num2 = 5;

	std::cout << "Valores antes de intercambiar num1 = " << num1 << " num2 = " << num2 << std::endl;

	intercambiar(num1, num2);

	std::cout << "Valores despues de intercambiar num1 = " << num1 << " num2 = " << num2 << std::endl;*/

	int numero = 9;

	std::cout << "Numero antes de incrementar: " << numero << std::endl;

	incrementar(numero);

	std::cout << "Numero despues de incrementar: " << numero << std::endl;


	return 0;
}