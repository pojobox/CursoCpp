#include <iostream>
#include <string>

struct Persona
{
	std::string nombre;
	int edad;
};

//Ejercicios
/*
	Ejercicio 1: Registro de estudiantes
	Objetivo: Crear un programa que lea datos de 2 estudiantes (nombre,edad,nota final)  los imprima./

*/
struct Estudiante
{
	std::string nombre;
	int edad;
	float notaFinal;
};

/*
	Ejercicio 2: Estructura + funcion
	Objetivo: Crear una funcion que reciba un estudiante y muestre su informacion.
*/

void mostrarEstudiante(Estudiante e)
{
	std::cout << e.nombre << ", " << e.edad << " anios,Nota: " << e.notaFinal << std::endl;
}



int main()
{

	/*Persona p1;

	p1.nombre = "Jonathan";
	p1.edad = 31;
	p1.altura = 1.82;


	std::cout << "Nombre: " << p1.nombre << std::endl;
	std::cout << "Edad: " << p1.edad << std::endl;
	std::cout << "Altura: " << p1.altura << std::endl;*/

	//array de estructuras
	/*Persona grupo[3];

	for (int i = 0; i < 3; i++)
	{
		std::cout << "Nombre de la persona #" << i + 1 << ": ";
		std::cin >> grupo[i].nombre;
		std::cout << "Edad: ";
		std::cin >> grupo[i].edad;
	}

	std::cout << "\nPersonas ingresadas:\n";
	for (int i = 0; i < 3; i++)
	{
		std::cout << grupo[i].nombre << " tiene " << grupo[i].edad << " anios" << std::endl;
	}*/

	Estudiante e1, e2;

	std::cout << "Nombre del estudiante 1: ";
	getline(std::cin, e1.nombre);
	std::cout << "Edad: ";
	std::cin >> e1.edad;
	std::cout << "Nota final: ";
	std::cin >> e1.notaFinal;
	std::cin.ignore(); // limpiar buffer

	//std::cout << "Nombre del estudiante 2: ";
	//getline(std::cin, e2.nombre);
	//std::cout << "Edad: ";
	//std::cin >> e2.edad;
	//std::cout << "Nota final: ";
	//std::cin >> e2.notaFinal;
	//

	//std::cout << "\nDatos de estudiantes.\n";
	//std::cout << e1.nombre << ", " << e1.edad << " anios,Nota: " << e1.notaFinal << std::endl;
	//std::cout << e2.nombre << ", " << e2.edad << " anios,Nota: " << e2.notaFinal << std::endl;

	mostrarEstudiante(e1);

	return 0;
}