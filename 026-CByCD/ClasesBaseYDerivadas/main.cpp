#include <iostream>


//Ejemplo 1 : Clase base y derivada con herencia publica

class Animal
{
public:
	void comer()
	{
		std::cout << "Estoy comiendo..." << std::endl;
	}
};

class Gato : public Animal
{

public:
	void maullar()
	{
		std::cout << "Miau miau!" << std::endl;
	}
};

//Ejemplo 2 : Herencia con atributos protegidos

class Empleado
{
protected:
	std::string nombre;
public:
	void setNombre(std::string n)
	{
		nombre = n;
	}
};

class Gerente : public Empleado
{
public:
	void mostrarNombre()
	{
		std::cout << "El gerente se llama: " << nombre << std::endl;
	}
};

/*
	Ejercicio 1: Clase base Vehiculo
	Objetivo: Crear una clase base Vehiculo con un metodo mover(). derivar bicicleta con un metodo pedalear.
*/
class Vehiculo
{
public:
	void mover()
	{
		std::cout << "El vehiculo se esta moviendo." << std::endl;
	}
};

class Bicicleta : public Vehiculo
{
public:
	void pedalear()
	{
		std::cout << "Pedaleando la bicicleta..." << std::endl;
	}
};

/*
	Ejercicio 2: Clase Persona y Estudiante
	Objetivo: Crear una clase Persona con nombre y metodo presentarse(). Derivar Estudiante y agregar un metodo estudiar().
*/

class Persona
{
public:
	std::string nombre;
	void presentarse()
	{
		std::cout << "Hola, soy: " << nombre << std::endl;
	}

	void setNombre(std::string n)
	{
		nombre = n;
	}
};

class Estudiante : public  Persona
{
public:
	void estudiar()
	{
		std::cout << nombre << " esta estudiando." << std::endl;
	}
};
int main()
{
	//Ejemplo 1
	//Gato g;
	//g.comer(); //metodo heredado
	//g.maullar(); //metodo propio

	//Ejemplo 2
	/*Gerente g;
	g.setNombre("Carlos");
	g.mostrarNombre();*/

	//Ejercicio 1:
	/*Bicicleta b;
	b.mover();
	b.pedalear();*/

	//Ejercicio 2
	/*Estudiante e;
	e.setNombre("Juan");
	e.presentarse();
	e.estudiar();*/
	

	return 0;
}