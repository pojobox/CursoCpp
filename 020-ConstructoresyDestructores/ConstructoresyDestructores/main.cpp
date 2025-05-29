#include <iostream>

//Ejemplo 1: Constructor y destructor por defecto
class Persona
{
private:
	std::string nombre;
	int edad;

public:
	//Constructor por defecto
	Persona()
	{
		nombre = "Desconocido";
		edad = 0;
		std::cout << "Objeto creado." << std::endl;
	}

	//Mostrar datos mediante un metodo
	void mostrarDatos()
	{
		std::cout << "Nombre: " << nombre << ", Edad: " << edad << std::endl;
	}

	//Destructor
	~Persona()
	{
		std::cout << "Objeto destruido." << std::endl;
	}

};

//Ejemplo 2 : Crear constructor con parametros
class Libro
{
private:
	std::string titulo;
	int paginas;

public:
	//Constructor con parametros
	Libro(std::string t, int p)
	{
		titulo = t;
		paginas = p;
		std::cout << "Objeto creado." << std::endl;
	}

	//crear metodo para mostrar el libro
	void mostrar()
	{
		std::cout << "Titulo: " << titulo << ", Paginas: " << paginas << std::endl;
	}

	//Destructor
	~Libro()
	{
		std::cout << "Libro destruido." << std::endl;
	}
};

/*
	Ejercicio 1: Crear clase Producto
	Objetivo: Crear una clase Producto con un constructor por defecto que inicialice nombre en "Sin nombre" y precio en 0.0. Agregar un metodo para mostrar los datos
*/
class Producto
{
private:
	std::string nombre;
	double precio;

public:
	Producto()
	{
		nombre = "Sin nombre";
		precio = 0.0;
	}

	void mostrar()
	{
		std::cout << "Producto: " << nombre << ", Precio: $" << precio << std::endl;
	}

	~Producto()
	{
		std::cout << "Destructor de producto." << std::endl;
	}
};
/*
	Ejercicio 2: Crear clase Alumno con constructor con parametros
	Objetivo: Crear una clase Alumno con nombre y nota. Usar el constructor con parametros para inicializar y un metodo para mostrar los datos al final destruir e imprimirlo.
*/
class Alumno
{
private:
	std::string nombre;
	float nota;

public:
	Alumno(std::string n, float no)
	{
		nombre = n;
		nota = no;
	}

	void mostrar()
	{
		std::cout << "Alumno: " << nombre << ", nota: " << nota << std::endl;
	}

	~Alumno()
	{
		std::cout << "Destructor de alumno." << std::endl;
	}


};

int main()
{
	//Ejemplo 1:
	/*Persona p;
	p.mostrarDatos();*/

	//Ejemplo 2:
	/*std::string nombre = "C++ desde cero";
	int paginas = 350;
	Libro miLibro(nombre, paginas);
	miLibro.mostrar();*/

	//Ejercicio 1 resolucion
	/*Producto p;
	p.mostrar();*/

	//Ejercicio 2 resolucion
	Alumno a1("Camila", 8.5);
	a1.mostrar();


	return 0;
}