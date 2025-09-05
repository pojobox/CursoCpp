#include <iostream>
using namespace std;

//Ejemplo 1: Funcion plantilla maximo

template <typename T>
T maximo(T a, T b)
{
	return (a > b) ? a : b;
}


//Ejemplo 2: Clase plantilla Caja

template<typename T>
class Caja
{
private:
	T valor;
public:
	Caja(T v) : valor(v) {}
	void mostrar() { cout << "Valor: " << valor << endl; }
};

/*
	Ejercicio 1: Funcion plantilla para obtener el minimo.
	Objetivo: Crear una funcion generica que devuelva el valor minimo entre dos elementos.
*/
template <typename T>
T minimo(T a, T b)
{
	return (a < b) ? a : b;
}

/*
	Ejercicio 2: Implementar una Pila generica con push y pop
	Objetivo: Crear una estructura de datos generica tipo pila (stack) , con operaciones basicas:
	push -> insertar un elemento en la pila
	pop -> quitar el ultimo elemento insertado
	top -> ver el elemento en la cima
*/
template <typename T>
class Pila
{
private:
	T datos[100]; //capacidad fija para simplificar.
	int tope;

public:
	Pila() : tope(-1) {}

	void push(T valor)
	{
		if (tope < 99)
		{
			datos[++tope] = valor;
		}
		else {
			cout << "Pila llena!" << endl;
		}
	}

	void pop()
	{
		if (tope >= 0)
		{
			tope--;
		}
		else {
			cout << "Pila vacia!" << endl;
		}
	}

	T top()
	{
		if (tope >= 0)
		{
			return datos[tope];
		}
		throw runtime_error("Pila vacia!");
	}

	bool empty() { return tope == -1; }
};


int main()
{
	//Ejemplo 1:
	/*cout << "Maximo entre 5 y 9: " << maximo(5, 9) << endl;
	cout << "Maximo entre 3.5 y 2.1: " << maximo(3.5, 2.1) << endl;
	cout << "Maximo entre z y a: " << maximo('z', 'a') << endl;*/

	//Ejemplo 2:
	/*Caja<int> cajaEntero(42);
	Caja<string> cajaTexto("Hola Templeates");

	cajaEntero.mostrar();
	cajaTexto.mostrar();*/

	//Ejercicio 1:
	/*cout << "Minimo entre 5 y 9: " << minimo(5, 9) << endl;
	cout << "Minimo entre 3.5 y 2.1: " << minimo(3.5, 2.1) << endl;*/
	//Ejercicio 2:
	Pila<int> pilaEnteros;
	pilaEnteros.push(10);
	pilaEnteros.push(20);
	cout << "Tope actual: " << pilaEnteros.top() << endl; //20
	pilaEnteros.pop();
	cout << "Tope actual: " << pilaEnteros.top() << endl; //10

	return 0;
}