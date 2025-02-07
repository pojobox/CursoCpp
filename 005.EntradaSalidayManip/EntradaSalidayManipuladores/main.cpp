#include <iostream>
#include <iomanip> //Libreria de manipuladores


int main()
{
	//int edad; //Declaramos la variable.

	//std::cout << "Indique su edad: " << std::endl; //Pedimos la edad

	//std::cin >> edad; //Almacenamos la edad en la variable

	//std::cout << "Su edad es: " << edad << std::endl; //Imprimimos la edad combinando texto y variable.


	// endl o \n

	/*std::cout << "Hola" << std::endl;
	std::cout << "Mundo";

	std::cout << std::endl;

	std::cout << "Hola\n";
	std::cout << "Mundo";*/


	//Manipuladores

	//double num = 3.1415926535;

	////Sin formato aplicado
	//std::cout << "Sin formato: " << num << std::endl;

	////Aplicamos precision fija de 2 decimales

	//std::cout << "Con 2 decimales: " << std::fixed << std::setprecision(2) << num << std::endl;

	////Aplicamos setw(10)

	//std::cout << "Ancho 10: " << std::setw(10) << num << std::endl;

	////aplicamos left
	//std::cout << "Ancho 10: " << std::left << std::setw(10) << num << std::endl;

	////aplicamos right
	//std::cout << "Ancho 10: " << std::right << std::setw(10) << num << std::endl;

	////Restauramos la configuración predeterminada con unsetf
	//std::cout.unsetf(std::ios::fixed); //Desactivamos fixed
	//std::cout << std::setprecision(6); //Restablecemos la precisión

	//std::cout << "Restaurado: " << num << std::endl;

	////aplicamos scientific
	//std::cout << "Scientific: " << std::scientific << num << std::endl;

	////Restauramos la configuración predeterminada con defaultfloat
	//std::cout << std::defaultfloat << "DefaultFloat: " << num << std::endl;


	//Ejercicio 
	//Objetivo: Crear un programa que calcule el área y el volumen de una caja.
	//Pasos:
	//1 Pedimos altura, ancho y largo con cin.
	//2 Calculamos el área y el volumen.
	//3 Mostrar el resultado con cout ,usando manipuladores (iomanip), fixed y setprecision(2).

	double height, width, length;

	//Entrada de datos
	std::cout << "Ingrese la altura de la caja: ";
	std::cin >> height;
	std::cout << "Ingrese el ancho de la caja: ";
	std::cin >> width;
	std::cout << "Ingrese el largo de la caja: ";
	std::cin >> length;

	//Calculos
	double area = width * height;
	double volumen = width * height * length;

	//Salida con formato
	std::cout << std::fixed << std::setprecision(2);
	std::cout << "El area de la caja es: " << area << " unidades cuadradas." << std::endl;
	std::cout << "El volumen de la caja es: " << volumen << " unidades cubicas.\n";




	return 0;
}