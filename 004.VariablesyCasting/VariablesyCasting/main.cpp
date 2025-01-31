#include <iostream>
#include <locale>
int main()
{

	//inicialización por asignación (=)

	/*int Edad = 31;
	double Precio = 3.72;
	char letra = 'c';
	bool estado = false;

	std::cout << "Edad: " << Edad << std::endl;
	std::cout << "Precio: " << Precio << std::endl;
	std::cout << "letra: " << letra << std::endl;
	std::cout << "estado: " << estado << std::endl;*/

	//inicialización por llaves ({valor})

	/*int Edad{ 31 };
	double Precio{ 3.72 };
	char letra {'c'};
	bool estado{ false };

	std::cout << "Edad: " << Edad << std::endl;
	std::cout << "Precio: " << Precio << std::endl;
	std::cout << "letra: " << letra << std::endl;
	std::cout << "estado: " << estado << std::endl;

	Edad = 40;
	std::cout << "Edad: " << Edad << std::endl;*/

	//sin inicializar.

	/*int Edad;
	double Precio;
	char letra;
	bool estado;

	Edad = 20;

	std::cout << "Edad: " << Edad << std::endl;
	std::cout << "Precio: " << Precio << std::endl;
	std::cout << "letra: " << letra << std::endl;
	std::cout << "estado: " << estado << std::endl;*/


	//inicialización por llaves ({valor})

	/*int Edad{};
	double Precio{};
	char letra {};
	bool estado{};

	std::cout << "Edad: " << Edad << std::endl;
	std::cout << "Precio: " << Precio << std::endl;
	std::cout << "letra: " << letra << std::endl;
	std::cout << "estado: " << std::boolalpha << estado << std::endl;*/

	////casting implicito
	//int a = 10;
	//double b = a; // se convierte a double.

	//std::cout << "a implicito a b: " << b << std::endl;
	//std::cout << "sizeOf(b)" << sizeof(b) << std::endl;


	//casting explicito
	//double a = 10.7;
	//int entero = int(a); // se convierte de 10.7 a 10.

	//std::cout << "a implicito a b: " << entero << std::endl;
	//std::cout << "sizeOf(b)" << sizeof(entero) << std::endl;


	//Ejercicio
	//Deben desarrollar un programa que convierta grados farenheit a grados centigrados
	// utilizando variables, operadores aritméticos y casting para redondear el resultado
	std::setlocale(LC_ALL, "");

	double farenheit, celsius; // declaración de variables

	farenheit = 50.4;
	

	//conversión de farenheit a celsius
	celsius = (5.0 / 9.0)* (farenheit - 32); //formula de conversion

	// cout
	std::cout << "La temperatura en Celsius es: " << celsius << " °C" << std::endl;

	//redondear 
	int celsiusRedondeado = int(celsius); //casting explicito.

	std::cout << "La temperatura en Celsius es: " << celsiusRedondeado << " °C" << std::endl;


	return 0;
}