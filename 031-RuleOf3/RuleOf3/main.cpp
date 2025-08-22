#include <iostream>
#include<cstring>
using namespace std;


//Ejemplo1 : Clase con puntero dinamico
class Cadena
{
private:
	char* texto;
public:
	//constructor
	Cadena(const char* t = "")
	{
		texto = new char[strlen(t) + 1];
		strcpy_s(texto, strlen(t) + 1, t);
	}

	//Constructor de copia
	Cadena(const Cadena& otra)
	{
		texto = new char[strlen(otra.texto) + 1];
		strcpy_s(texto, strlen(otra.texto) + 1, otra.texto);
	}

	//Operador de asignacion
	Cadena& operator=(const Cadena& otra)
	{
		if (this != &otra) // Evita autoasignacion
		{
			delete[] texto;
			texto = new char[strlen(otra.texto) + 1];
			strcpy_s(texto, strlen(otra.texto) + 1, otra.texto);
		}
		return *this;
	}

	//Destructor
	~Cadena()
	{
		delete[] texto;
	}

	//Mostrar
	void mostrar() const
	{
		cout << texto << endl;
	}
};

//Ejemplo 2 Clase con arreglo dinamico de enteros

class Vector
{
private:
	int* datos;
	int size;

public:
	//Constructor
	Vector(int n, int valor = 0)
	{
		size = n;
		datos = new int[n];
		for (int i = 0; i < n; i++)
		{
			datos[i] = valor;
		}
	}

	//Constructor de copia
	Vector(const Vector& otro)
	{
		size = otro.size;
		datos = new int[size];
		for (int i = 0; i < size; i++)
		{
			datos[i] = otro.datos[i];
		}
	}

	//Operador de asignacion
	Vector& operator=(const Vector& otro)
	{
		if (this != &otro)
		{
			delete[] datos;
			size = otro.size;
			datos = new int[size];
			for (int i = 0; i < size; i++)
			{
				datos[i] = otro.datos[i];
			}
		}
		return *this;
	}

	//Destructor
	~Vector()
	{
		delete[] datos;
	}

	//mostrar
	void mostrar() const
	{
		for (int i = 0; i < size; i++)
		{
			cout << datos[i] << " ";
		}
		cout << endl;
	}

};

/*
	Ejercicio 1: Clase persona con nombre y edad dinamicos
	Objetivo: Crear la clase Persona con la regla de los 3 para que se puedan copiar y asignar correctamente objetos persona

*/
class Persona
{
private:
	char* nombre;
	int edad;
public:
	//Constructor
	Persona(const char* n, int e) : edad(e)
	{
		nombre = new char[strlen(n) + 1];
		strcpy_s(nombre, strlen(n) + 1, n);
	}

	//Constructor de copia
	Persona(const Persona& otra)
	{
		edad = otra.edad;
		nombre = new char[strlen(otra.nombre) + 1];
		strcpy_s(nombre, strlen(otra.nombre) + 1, otra.nombre);
	}

	//Operador de asignacion
	Persona& operator= (const Persona& otra)
	{
		if (this != &otra)
		{
			delete[] nombre;
			edad = otra.edad;
			nombre = new char[strlen(otra.nombre) + 1];
			strcpy_s(nombre, strlen(otra.nombre) + 1, otra.nombre);
		}
		return *this;
	}
	//Destructor
	~Persona()
	{
		delete[] nombre;
	}

	//mostrar
	void mostrar() const
	{
		cout << "Nombre: " << nombre << ", Edad: " << edad << endl;
	}

};


/*
	Ejercicio 2: Clase Libro con titulo y autor dinamicos
	Objetivo: Crear la clase Libro con la regla de los 3 para mostrar en main como se copian y se asignan objetos.
*/
class Libro
{
private:
	char* titulo;
	char* autor;

public:
	//Constructor
	Libro(const char* t, const char* a)
	{
		titulo = new char[strlen(t) + 1];
		strcpy_s(titulo, strlen(t) + 1, t);

		autor = new char[strlen(a) + 1];
		strcpy_s(autor, strlen(a) + 1, a);
	}

	//Constructor de copia
	Libro(const Libro& otro)
	{
		titulo = new char[strlen(otro.titulo) + 1];
		strcpy_s(titulo, strlen(otro.titulo) + 1, otro.titulo);
		
		autor = new char[strlen(otro.autor) + 1];
		strcpy_s(autor, strlen(otro.autor) + 1, otro.autor);
	}

	//Operador de asignacion
	Libro& operator=(const Libro& otro)
	{
		if (this != &otro)
		{
			delete[] titulo;
			delete[] autor;

			titulo = new char[strlen(otro.titulo) + 1];
			strcpy_s(titulo, strlen(otro.titulo) + 1, otro.titulo);

			autor = new char[strlen(otro.autor) + 1];
			strcpy_s(autor, strlen(otro.autor) + 1, otro.autor);
		}
		return *this;
	}

	//Destructor 
	~Libro()
	{
		delete[] titulo;
		delete[] autor;
	}
	
	//mostrar
	void mostrar() const
	{
		cout << "Titulo: " << titulo << ", Autor: " << autor << endl;
	}
};

int main()
{
	//Ejemplo 1
	//Cadena saludo("Hola mundo");
	//Cadena copia = saludo; //usa operador de copia
	//Cadena asignada;
	//asignada = saludo; //usa operador de asignacion

	//saludo.mostrar();
	//copia.mostrar();
	//asignada.mostrar();

	//Ejemplo 2:
	//Vector v1(5, 3);
	//Vector v2 = v1; //constructor de copia
	//Vector v3(3, 1);
	//v3 = v1; //operador de asignacion
	//
	//v1.mostrar();
	//v2.mostrar();
	//v3.mostrar();

	//Ejercicio 1:
	/*Persona p1("Juan", 25);
	Persona p2 = p1;
	Persona p3("Maria", 30);
	p3 = p1;

	p1.mostrar();
	p2.mostrar();
	p3.mostrar();*/

	//Ejercicio 2:
	Libro l1("1984", "George Orwell");
	Libro l2 = l1;
	Libro l3("Cien anios de soledad", "Gabriel Garcia Marquez");
	l3 = l1;

	l1.mostrar();
	l2.mostrar();
	l3.mostrar();

	return 0;
}