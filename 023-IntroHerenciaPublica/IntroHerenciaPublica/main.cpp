#include <iostream>

//Ejemplo 1: Animal -> Perro

class Animal {

public:
	void comer()
	{
		std::cout << "El animal esta comiendo." << std::endl;
	}
};


class Perro : public Animal
{
public:
	void ladrar()
	{
		std::cout << "El perro ladra:  Guau!!" << std::endl;
	}
};

//Ejemplo 2 : Empleado -> Gerente

class Empleado
{
public:
	std::string nombre;
	double salario;

	void mostrarDatos()
	{
		std::cout << "Empleado: " << nombre << ", Salario: $" << salario << std::endl;
	}
};

class Gerente : public Empleado
{
public:
	std::string departamento;

	void mostrarDepartamento()
	{
		std::cout << "Departamento: " << departamento << std::endl;
	}
};

//Ejercicios
/*
	Ejercicio 1: Vehiculo -> Auto
	Objetivo: Crear una clase Vehiculo con atributo marca y metodo mostrarMarca(). Luego
	Crear la clase Auto que herede de Vehiculo y tenga un metodo Acelerar();
	*/

class Vehiculo
{
public:
	std::string marca;

	void mostrarMarca()
	{
		std::cout << "Marca: " << marca << std::endl;
	}
};

class Auto : public Vehiculo
{
public:
	void Acelerar()
	{
		std::cout << "El auto esta acelerando. " << std::endl;
	}
};

/*
	Ejercicio 2: Figura -> Cuadrado
	Objetivo: Crear una clase Figura con atributo Nombre. Luego una clase Cuadrado que herede de Figura y calcule el area.
*/

class Figura
{
public:
	std::string nombre;

	void mostrarNombre()
	{
		std::cout << "Figura: " << nombre << std::endl;
	}
};


class Cuadrado : public Figura
{
public:
	double lado = 0.0;

	double calcularArea()
	{
		return lado * lado;
	}
};

int main()
{
	//Ejemplo 2:
	//Perro miPerro;
	//miPerro.comer(); //metodo heredado
	//miPerro.ladrar(); // metodo propio

	//Ejemplo 1:
	/*Gerente g;
	g.nombre = "Lucia";
	g.salario = 80000;
	g.departamento = "Finanzas";

	g.mostrarDatos();
	g.mostrarDepartamento();*/


	//Ejercicio 1:
	/*Auto a;
	a.marca = "Mitsubishi";
	a.mostrarMarca();
	a.Acelerar();*/

	//Ejercicio 2:
	Cuadrado c;
	c.nombre = "Cuadrado";
	c.mostrarNombre();
	c.lado = 5.0;
	double resultado = c.calcularArea();

	std::cout << "El resultado es: " << resultado << std::endl;

	return 0;
}