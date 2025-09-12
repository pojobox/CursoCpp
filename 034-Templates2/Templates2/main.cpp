#include <iostream>
using namespace std;

//Ejemplo 1: Funcion plantilla con multiples tipos

template <typename T, typename U>
auto multiplicar(T a, U b)
{
	return a * b;
}


//Ejemplo 2: Clase Plantilla Par<T,U>
template <typename T, typename U>
class Par
{
private:
	T primero;
	U segundo;

public:
	Par(T p, U s) : primero(p), segundo(s) {}

	void mostrar()
	{
		cout << "Par: ( " << primero << ", " << segundo << ")" << endl;
	}
};

/*
	Ejercicio 1: Funcion intercambiar
	Objetivo: Implementa una funcion plantilla que intercambie dos valores
*/
template<typename T>
void intercambiar(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}
/*
	Ejercicio 2: Clase Vector<T> (simplificada)
	Ojbetivo: Implementa una clase plantilla Vector<T> que permita:
	Agregar elementos (push_back)
	Mostrar su contenido (mostrar)
	Conocer su tamaño (size)
	
	
*/
template<typename T>
class Vector
{

private:
	T* datos;
	int capacidad;
	int cantidad;

public:
	Vector(int cap = 10) : capacidad(cap), cantidad(0)
	{
		datos = new T[capacidad];
	}

	~Vector()
	{
		delete[] datos;
	}

	void push_back(T valor)
	{
		if (cantidad < capacidad)
		{
			datos[cantidad++] = valor;
		}
		else
		{
			cout << "Capacidad llena!" << endl;
		}
	}

	void mostrar()
	{
		cout << "[ ";
		for (int i = 0; i < cantidad; i++)
		{
			cout << datos[i] << " ";
		}
		cout << "]" << endl;
	}

	int size()
	{
		return cantidad;
	}
};

int main()
{
	//Ejemplo 1:
	/*cout << " 3 * 4.5 = " << multiplicar(3, 4.5) << endl;
	cout << " 2.2 * 5 = " << multiplicar(2.2, 5) << endl;*/

	//Ejemplo 2:
	/*Par<int, string > p1(1, "uno");
	Par<double, char> p2(3.14, 'P');

	p1.mostrar();
	p2.mostrar();*/

	//Ejercicio 1:
	/*int x = 10, y = 20;
	intercambiar(x, y);
	cout << "x = " << x << ", y = " << y << endl;

	string s1 = "Hola", s2 = "Mundo!";
	intercambiar(s1, s2);
	cout << "s1 = " << s1 << ", s2 = " << s2 << endl;*/

	//Ejercicio 2:
	Vector<int > v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);

	v.mostrar();
	cout << "Tamanio: " << v.size() << endl;

	Vector<string> vs;
	vs.push_back("Hola");
	vs.push_back("C++");
	vs.mostrar();
	cout << "Tamanio: " << vs.size() << endl;

	return 0;
}