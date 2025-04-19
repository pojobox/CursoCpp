#include <iostream>
#include <cstring> // libreria para funciones como strlen
#include <string> // libreria para usar std string

int main()
{
	/*char nombre[20];

	std::cout << "Ingrese su nombre: \n";
	std::cin >> nombre;

	std::cout << "Hola, " << nombre << "!" << std::endl;
	std::cout << "Cantidad de letras: " << strlen(nombre) << std::endl;*/

	
	//std::string nombreCompleto;

	//std::cout << "Ingrese su nombre: \n";
	//getline(std::cin, nombreCompleto); //lee el dato permitiendo espacios


	//std::cout << "Hola, " << nombreCompleto << "!" << std::endl;
	//std::cout << "Cantidad de letras: " << nombreCompleto.length() << std::endl;

	/*
	.substr (inicio, largo) Devuelve una sub cadena
	.append
	.find
	*/

	/*std::string frase = "hola como estas";
	std::string frase2 = " Todo bien?";

	std::cout << "Frase reducida: " << frase.substr(0,4) << std::endl;

	std::cout << "Frase combinada: " << frase.append(frase2) << std::endl;

	std::cout << "indice: " << frase.find("c") << std::endl;*/

	/*std::string usuario1 = "admin";
	std::string usuarioIngresado;

	std::cout << "Ingrese su usuario por favor!: \n";
	std::cin >> usuarioIngresado;

	if (usuarioIngresado == usuario1)
	{
		std::cout << "Bienvenido administrador!.\n";
	}
	else
	{
		std::cout << "Usuario comun!.\n";
	}*/

	
	//Ejercicios
	/*
		Ejercicio 1: Contar caracteres de una palabra
		Objetivo: Leer una palabra e imprimir cuantos caracteres tiene con cstring
	*/
	/*
		Ejercicio 2: Comparar dos cadenas
		Objetivo: Leer dos palabras e indicar si son iguales con strcmp
	*/

	//Ejercicio 1 resolucion
	/*char palabra[20];
	std::cout << "Ingrese una palabra\n";
	std::cin >> palabra;

	std::cout << "La palabra: " << palabra << " Tiene: " << strlen(palabra) << " caracteres!" << std::endl;*/


	//Ejercicio 2 resolucion
	char palabra[20], palabra2[20];

	std::cout << "Ingrese la primer palabra: ";
	std::cin >> palabra;
	std::cout << "Ingrese la segunda palabra: ";
	std::cin >> palabra2;

	if (std::strcmp(palabra, palabra2) == 0)
	{
		std::cout << "Las palabras son iguales!\n";
	}
	else {
		std::cout << "Las palabras no son iguales!\n";
	}




	return 0;
}