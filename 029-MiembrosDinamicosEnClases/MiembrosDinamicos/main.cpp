#include <iostream>
#include <cstring>


//Ejemplo 1 : Clase Alumno con nombre dinamico

class Alumno
{

private:
	char* nombre;
	int edad;

public:
	//Constructor por defecto
	Alumno()
	{
		nombre = new char[1];
		nombre[0] = '\0';
		edad = 0;
	}

	//Constructor parametrizado
	Alumno(const char* n, int e)
	{
		nombre = new char[strlen(n) + 1];
		strcpy_s(nombre, strlen(n) + 1, n);
		edad = e;
	}

	//Constructor copia
	Alumno(const Alumno& otro)
	{
		nombre = new char[strlen(otro.nombre) + 1];
		strcpy_s(nombre, strlen(otro.nombre) + 1, otro.nombre);
		edad = otro.edad;
	}

	//Destructor
	~Alumno()
	{
		delete[] nombre;
	}

	//Void mostrar
	void mostrar()
	{
		std::cout << "Nombre: " << nombre << ", Edad: " << edad << std::endl;
	}
	


};

//Ejemplo 2 : Clase Libro con titulo dinamico
class Libro
{

private:
	char* titulo;
	int paginas;

public:
	Libro(const char* t, int p)
	{
		titulo = new char[strlen(t) + 1];
		strcpy_s(titulo, strlen(t) + 1, t);
		paginas = p;
	}

	~Libro()
	{
		delete[] titulo;
	}

	void mostrar()
	{
		std::cout << "Titulo: " << titulo << ", Paginas: " << paginas << std::endl;
	}


};

/*
	Ejercicio 1: Cancion con titulo y duracion
	Objetivo: Crear una clase que almacene una cancion con titulo (dinamico) y duracion en segundos.
*/
class Cancion
{
private: 
	char* titulo;
	int duracion;

public:
	Cancion(const char* t, int d)
	{
		titulo = new char[strlen(t) + 1];
		strcpy_s(titulo, strlen(t) + 1, t);
		duracion = d;
	}

	~Cancion()
	{
		delete[] titulo;
	}

	void mostrar()
	{
		std::cout << "Titulo: " << titulo << ",Duracion: " << duracion << "seg." << std::endl;
	}

};


/*
	Ejercicio 2: Persona con nombre y apellido dinamico
	Objetivo: Crear una clase Persona que guarde nombre y apellido con punteros y permita mostrar la informacion.
*/

class Persona
{
private:
	char* nombre;
	char* apellido;

public:
	Persona(const char*n, const char* a)
		{
		nombre = new char[strlen(n) + 1];
		strcpy_s(nombre, strlen(n) + 1, n);

		apellido = new char[strlen(a) + 1];
		strcpy_s(apellido, strlen(a) + 1, a);
		}

	~Persona()
	{
		delete[] nombre;
		delete[] apellido;
	}

	void mostrar()
	{
		std::cout << "Nombre completo: " << nombre << " " << apellido << std::endl;
	}
};

int main()
{	
	//Ejemplo 1
	/*Alumno a1("Juan", 25);
	a1.mostrar();*/

	//Ejemplo 2:
	/*Libro L1("C++ de principiante a experto", 450);
	L1.mostrar();*/
	
	//Ejercicio 1:
	/*Cancion c1("In the end", 354);
	c1.mostrar();*/
	//Ejercicio 2:
	Persona p1("Juan", "Perez");
	p1.mostrar();

	return 0;
}