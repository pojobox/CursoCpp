#include <iostream>

//Herencia protegida

class Persona
{
protected:
	std::string nombre;

public:
	void setNombre(std::string n)
	{
		nombre = n;
	}
};


class Estudiante : protected Persona
{
public:
	void mostrar()
	{
		std::cout << "Estudiante: " << nombre << std::endl; //se puede aceder porque es protected
	}

	void asignarNombre(std::string n)
	{
		setNombre(n); // Metodo heredado como protected
	}

};

//Herencia privada

class Dispositivo
{
public:
	void encender()
		{
		std::cout << "Dispositivo encendido." << std::endl;
		}

};

class Telefono : private Dispositivo
{
public:
	void usar()
	{
		encender(); // Se puede usar dentro de la clase
	}
};

/*
	Ejercicio 1: Herencia protegida
	Objetivo: Crear una clase Animal con atributo nombre protegido. Derivar perro con Herencia protegida. agregar metodo ladrar() que muestre el nombre del perro.
*/

class Animal
{
protected:
	std::string nombre;

public:
	void setNombre(std::string n)
	{
		nombre = n;
	}
};

class Perro : protected Animal
{

public:
	void asignarNombre(std::string n)
	{
		setNombre(n);
	}

	void ladrar()
	{
		std::cout << nombre << " Dice: Guau guau!!!" << std::endl;
	}


};

/*
	Ejercicio 2: Herencia privada
	Objetivo: Crear una clase Sensor con metodo detectar(). Derivar SensorTemperatura con herencia privada, agregar metodo verificarTemperatura() que llame a detectar().

*/

class Sensor
{
public:
	void detectar()
	{
		std::cout << "Detectando cambios..." << std::endl;
	}
};

class SensorTemperatura : private Sensor
{
public:
	void verificarTemperatura()
	{
		detectar(); // permitido dentro de la clase
	}
};




int main()
{
	//Ejemplo 1:
	/*Estudiante e;
	e.asignarNombre("Laura");
	e.mostrar();*/
	//e.setNombre("Laura"); //Error : setNombre no es accesible desde afuera

	//Ejemplo 2:
	//Telefono t;
	//t.usar(); // se puede utilizar
	//t.encender(); // no se puede acceder desde afuera (Error!!!)


	//Ejercicio 1:
	/*Perro p;
	p.asignarNombre("Firulais");
	p.ladrar();*/

	//Ejercicio 2
	SensorTemperatura s;
	s.verificarTemperatura();
	//s.detectar(); // Error inaccesible desde afuera

	return 0;
}