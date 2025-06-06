#include <iostream>

//Ejemplo 1: Atributos publicos vs privados

class Persona
{
public:
	std::string nombre;

private:
	int edad;

public:
	void setEdad(int e)
	{
		if (e > 0)
		{
			edad = e;
		}
	}

	int getEdad()
	{
		return edad;
	}

	void Presentarse()
	{
		std::cout << "Hola, soy " << nombre << " y tengo " << edad << " anios." << std::endl;
	}
};

//Ejemplo 2 : uso de protected (adelanto para herencia)

class Animal
{
protected:
	std::string especie;

public:
	void setEspecie(std::string e)
	{
		especie = e;
	}
};

class Perro : public Animal
{
public:
	void mostrar()
	{
		std::cout << "Soy un " << especie << std::endl;
	}
};

/*
	Ejercicio 1: Clase Libro con validacion de paginas
	Objetivo: Crear una clase Libro con atributo privado paginas y nombre publico. Usar setPaginas para validar que no sea menor a 1.
*/
class Libro
{
public:
	std::string nombre;

private:
	int paginas;

public:
	void setPaginas(int p)
	{
		if (p > 0) paginas = p;
	}

	int getPaginas()
	{
		return paginas;
	}

	void mostrar()
	{
		std::cout << nombre << " tiene " << paginas << " paginas." << std::endl;
	}
};

/*
	Ejercicio 2: Clase Temperatura con validacion de rango
	Objetivo: Crear una clase Temperatura con atributo privado grados (debe estar entre -50 y 60). Luego mostrar el valor si es valido.
*/

class Temperatura
{
private:
	double grados = 0.0;

public:
	void setGrados(double g)
	{
		if (g >= -50 && g <= 60)
		{
			grados = g;
		}
		else {
			std::cout << "Temperatura fuera del rango permitido.";
		}
	}

	double getGrados()
	{
		return grados;
	}

	void mostrar()
	{
		std::cout << "Temperatura: " << grados << " C" << std::endl;
	}
};

int main()
{
	//Ejemplo 1
	/*Persona p1;
	p1.nombre = "Juan";
	p1.setEdad(30);
	p1.Presentarse();*/

	//Ejemplo 2
	/*Perro p;
	p.setEspecie("Canino");
	p.mostrar();*/


	//Ejercicio 1 resolucion
	/*Libro l;
	l.nombre = "c++ de basico a avanzado";
	l.setPaginas(10);
	l.mostrar();

	int paginas = l.getPaginas();
	std::cout << "La cantidad de paginas es: " << paginas << std::endl;*/

	//Ejercicio 2 resolucion
	Temperatura t;
	t.setGrados(-40);
	t.mostrar();
	double grados = t.getGrados();
	std::cout << "La temperatura es: " << grados << " Grados C." << std::endl;

	return 0;
}