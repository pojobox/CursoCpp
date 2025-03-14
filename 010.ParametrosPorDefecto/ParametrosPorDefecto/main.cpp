#include <iostream>


/*
Sintaxis basica

tipo nombreFuncion(tipo parametro1 = valorDefecto1, tipo parametro2 = valorDefecto2)
{
	codigo de la funcion
}
*/


//Definicion de funcion
int multiplicar(int num1, int num2 = 2)
{
	return num1 * num2;
}

//Definicion de la funcion
void mostrarCaracter(char letra = 'A', int repeticiones = 1)
{
	for (int i = 0; i < repeticiones; i++)
	{
		std::cout << letra << " ";
	}
	std::cout << std::endl;
}

//Ejercicio 1: Calcular el area de un rectangulo
/*
	Crear una funcion que reciba la base y la altura de un rectangulo, pero si no se proporciona la altura , que utilice el valor por defecto 1
*/
//Definicion de la funcion
int calcularArea(int base, int altura = 1)
{
	return base * altura;
}

//Ejercicio 2 : Calculadora de propinas
/*
	Crear una funcion calcularPropina() que reciba el monto de una cuenta y un porcentaje opcional de propina.
*/

//Definicion de la funcion
void calcularPropina(double monto, double porcentaje = 10)
{
	double propina = (monto * porcentaje) / 100;
	std::cout << "Para una cuenta de $" << monto << " ,la propina es de $" << propina << std::endl;
}

int main()
{


	//int resultado = multiplicar(5);
	/*int resultado = multiplicar(5,4);
	std::cout << "El resultado es: " << resultado << std::endl;*/

	//mostrarCaracter(); //Mostrar A por defecto
	//mostrarCaracter('B'); // Usa B en lugar de A
	//mostrarCaracter('C', 5); // Usa C en lugar de A y 5 en lugar de 1


	//std::cout << calcularArea(5) << std::endl; // utiliza 1 por defecto en altura 

	//std::cout << calcularArea(5,3) << std::endl; // utiliza 3 en altura reemplazando el valor 1

	calcularPropina(100); // utiliza 10 % por defecto
	calcularPropina(200, 15); // utiliza 15 %
	calcularPropina(50, 20); // utilizar 20 %

	return 0;
}