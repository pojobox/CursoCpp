#include <iostream>

//Ejemplo 1 : Sobrecarga de metodos (calculadora)

class Calculadora
{

public:
	int sumar(int a, int b)
	{
		return a + b;
	}
	
	double sumar(double a, double b)
	{
		return a + b;
	}

	int sumar(int a, int b, int c)
	{
		return a + b + c;
	}
};

//Ejemplo 2: Sobreescritura de metodo(Animal)

class Animal
{
public:
	virtual void hablar()
	{
		std::cout << "Sonido generico" << std::endl;
	}
};

class Gato : public Animal
{
public:
	void hablar() override
	{
		std::cout << "Miau" << std::endl;
	}
};


/*
	Ejercicio 1: Clase mensaje sobrecargado
	Objetivo: Crear una clase Mensaje con un metodo enviar() sobrecargado para:
	Enviar mensaje sin parametros (solo "Mensaje enviado")
	Enviar mensaje con texto personalizado.
*/

class Mensaje
{
public:
	void enviar()
	{
		std::cout << "Mensaje enviado!." << std::endl;
	}

	void enviar(std::string mensaje)
	{
		std::cout << "Mensaje: " << mensaje << std::endl;
	}
};

/*
	Ejercicio 2: Clase vehiculo y sobreescritura
	Objetivo: Crear una clase base Vehiculo con un metodo virtual encender(). Luego crear Auto que sobreescriba encender() con un mensaje personalizado.
*/
class Vehiculo
{
public:
	virtual void encender()
	{
		std::cout << "Encendiendo vehiculo generico" << std::endl;
	}
};


class Auto : public Vehiculo
{
public:
	void encender() override
	{
		std::cout << "El auto esta encendido!" << std::endl;
	}

};
int main()
{
	//Ejemplo 1:
	//Calculadora calc;
	//std::cout << calc.sumar(2, 3) << std::endl;  // 5
	//std::cout << calc.sumar(2.5, 3.1) << std::endl;  // 5.6
	//std::cout << calc.sumar(1,2,3) << std::endl;  // 6


	////Ejemplo 2:
	//Animal* a;
	//Gato g;
	//a = &g;
	//a->hablar(); //dice Miau

	//Ejercicio 1:
	/*Mensaje m;
	m.enviar();
	m.enviar("Hola desde C++!");*/

	//Ejercicio 2:
	Vehiculo* v;
	Auto a;
	v = &a;
	v->encender(); // llama al metodo de auto



	return 0;
}