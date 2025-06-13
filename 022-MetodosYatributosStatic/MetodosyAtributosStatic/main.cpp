#include <iostream>

//Ejemplo 1: Contador de objetos creados
class Persona
{
private:
	std::string nombre;
	static int contador;

public:
	Persona(std::string n)
	{
		nombre = n;
		contador++;
	}

	void presentarse()
	{
		std::cout << "Hola, soy " << nombre << std::endl;
	}

	static int obtenerContador()
	{
		return contador;
	}
};


int Persona::contador = 0;

//Ejemplo 2 :Metodo estatico de utilidad
class Matematica
{
public:
	static int sumar(int a, int b)
	{
		return a + b;
	}
};


/*
	Ejercicio 1: Crear una clase Producto con atributo static int cantidadProductos, que se incremente cada vez que se cree un nuevo producto.
*/
class Producto
{
private:
	std::string nombre;
	static int cantidadProductos;

public:
	Producto(std::string n)
	{
		nombre = n;
		cantidadProductos++;
	}

	void mostrar()
	{
		std::cout << "Producto: " << nombre << std::endl;
	}

	static int getCantidadProductos()
	{
		return cantidadProductos;
	}


};
//inicializar atributo static
int Producto::cantidadProductos = 0;


/*
	Ejercicio 2: Crear una clase de utilidad con un metodo static double convertirCelsiusAFarenheit(double celsius)
*/

class Utilidad
{
public:
	static double convertirCelsiusAFarenheit(double celsius)
	{
		return (celsius * 9.0 / 5.0) + 32;
	}
};

int main()
{
	//Ejemplo 1
	/*Persona p1("Ana");
	Persona p2("Juan");

	p1.presentarse();
	p2.presentarse();

	std::cout << "Cantidad de personas: " << Persona::obtenerContador() << std::endl;*/

	//Ejemplo 2
	/*std::cout << "Suma: " << Matematica::sumar(10, 15) << std::endl;*/

	//Ejercicio 1 resolucion
	/*Producto p1("Mouse");
	Producto p2("Teclado");

	p1.mostrar();
	p2.mostrar();

	std::cout << "Total de productos creados: " << Producto::getCantidadProductos() << std::endl;*/

	//Ejercicio 2 resolucion
	double tempC = 25.0;
	double tempF = Utilidad::convertirCelsiusAFarenheit(tempC);

	std::cout << tempC << " Grados equivalen a " << tempF << " Farenheit." << std::endl;
	return 0;
}