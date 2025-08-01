#include <iostream>
#include <cstring>

//Ejemplo 1 : Clase computadora con puntero a modelo
class Computadora
{
private:
	char* modelo;

public:
	Computadora(const char* m)
	{
		modelo = new char[strlen(m) + 1];
		strcpy_s(modelo, strlen(m) + 1, m);
	}

	void mostrar()
	{
		std::cout << "Modelo: " << modelo << std::endl;
	}

	~Computadora()
	{
		delete[] modelo;
	}
};

//Ejemplo 2: Clase videojuego con puntetro a nombre 
class Videojuego
{
private:
	char* nombre;

public:
	Videojuego(const char* n)
	{
		nombre = new char[strlen(n) + 1];
		strcpy_s(nombre, strlen(n) + 1, n);
	}

	void mostrar()
	{
		std::cout << "Videojuego: " << nombre << std::endl;
	}

	~Videojuego()
	{
		delete[] nombre;
	}
};

/*
	Ejercicio 1: Clase Libro con puntero a titulo
	Objetivo: Crear una clase que almacene un titulo usando un puntero dinamico, con constrctor, metodo mostrar y destructor.
*/
class Libro
{
private:
	char* titulo;

public:
	Libro(const char* t)
	{
		titulo = new char[strlen(t) + 1];
		strcpy_s(titulo, strlen(t) + 1, t);
	}

	void mostrar()
	{
		std::cout << "Titulo del libro: " << titulo << std::endl;
	}

	~Libro()
	{
		delete[] titulo;
	}


};


/*
	Ejercicio 2: Clase Estudiante con puntero a nombre
	Objetivo: Usar memoria dinamica para almacenar el nombre de un estudiante. Liberar esa memoria al finalizar
*/
class Estudiante
{
private:
	char* nombre;

public:
	Estudiante(const char* n)
	{
		nombre = new char[strlen(n) + 1];
		strcpy_s(nombre, strlen(n) + 1, n);
	}

	void mostrar()
		{
			std::cout << "Nombre del estudiante: " << nombre << std::endl;
		}

	~Estudiante()
	{
		delete[] nombre;
	}
	
};

int main()
{
	//Ejemplo 1:
	/*Computadora c1("Dell XPS 15");
	c1.mostrar();*/
	
	//Ejemplo 2 :
	/*Videojuego v1("The witcher 3");
	v1.mostrar();*/

	//Ejercicio 1:
	/*Libro l1("1594");
	l1.mostrar();*/

	//Ejercicio 2:
	Estudiante e1("Juan Perez");
	e1.mostrar();

	return 0;
}