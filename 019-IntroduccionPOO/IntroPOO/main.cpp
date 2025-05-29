#include <iostream>


//Ejemplo 1 : Crear Clase Persona con atributos y metodos

class Persona
{
public:
	std::string nombre;
	int edad;

	void presentarse() { std::cout << "Hola, soy " << nombre << " y tengo " << edad << " anios." << std::endl; }
};

//Ejemplo numero 2: Encapsulacion con metodos get y set

class CuentaBancaria
{
private:
	double saldo = 0;

public:
	//set
	void depositar(double monto)
	{
		if (monto > 0)
		
			saldo += monto;
		
	}

	//get
	void mostrarSaldo()
	{
		std::cout << "Saldo actual: $" << saldo << std::endl;
	}
};

/*
	Ejercicio 1 : Crear una clase Rectangulo
	Objetivo : Crear una clase que represente un rectangulo con atributos base  altura, Implementar un metodo para calcular el area
*/

class Rectangulo
{
public:
	double base = 0;
	double altura = 0;

	//metodo calcular altura
	double calcularArea()
	{
		return base * altura;
	}
};
/*
	Ejercicio 2: Crear una clase Auto
	Objetivo: Crear una clase Auto con atributos ,marca, anio y velocidad. Incluir un metodo acelerar que incremente la velocidad y otro para mostrar el estado
*/
class Auto
{
public:
	std::string marca;
	int anio;
	int velocidad = 0;

	//set
	void acelerar(int incremento)
	{
		velocidad += incremento;
	}

	//get
	void mostrarEstado()
	{
		std::cout << "Auto: " << marca << " (" << anio << ") - Velocidad: " << velocidad << " km/h" << std::endl;
	}
};

int main()
{

	//Ejemplo 1
	/*Persona p1;
	p1.nombre = "Jonathan";
	p1.edad = 31;
	p1.presentarse();*/

	//Ejemplo 2
	//CuentaBancaria miCuenta;
	//miCuenta.depositar(1500);
	//miCuenta.mostrarSaldo();


	//Ejercicio 1 resolucion
	/*Rectangulo r;
	r.base = 5;
	r.altura = 3;
	std::cout << "Area del rectangulo: " << r.calcularArea() << std::endl;*/

	//Ejercicio 2 resolucion
	Auto miAuto;
	miAuto.marca = "Toyota";
	miAuto.anio = 2025;
	miAuto.acelerar(50);
	miAuto.mostrarEstado();


	return 0;
}