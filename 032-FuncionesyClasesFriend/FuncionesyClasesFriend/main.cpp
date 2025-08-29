#include <iostream>
using namespace std;

class Caja
{

private:
	int valor;

public:
	Caja(int v) : valor(v) {}

	//Funcion amiga
	friend void mostrarValor(const Caja& c);
};

//implementacion de la funcion amiga
void mostrarValor(const Caja& c)
{
	cout << "El valor dentro de la caja es: " << c.valor << endl;
}


class Motor;

class Coche
{
private:
	string marca;
public:
	Coche(string m) : marca(m){}
	friend class Motor; //toda la clase motor es amiga
};

class Motor
{
public:
	void mostrarMarca(const Coche& c)
	{
		cout << "El coche es de la marca: " << c.marca << endl;
	}
};

/*
	Ejercicio 1:  Funcion amiga para comparar
	Objetivo: crear la clase Rectangulo con atributos ancho y alto privados
	Escribir una funcion amiga llamada esMayor que reciba dos rectangulos y devuelva cual tiene mayor area.
*/
class Rectangulo
{
private:
	int ancho, alto;

public:
	Rectangulo(int a, int h) : ancho(a), alto(h) {}

	friend bool esMayor(const Rectangulo& r1, const Rectangulo& r2);
};

bool esMayor(const Rectangulo& r1, const Rectangulo& r2)
{
	int area1 = r1.ancho * r1.alto;
	int area2 = r2.ancho * r2.alto;
	return area1 > area2; 
}
/*
	Ejercicio 2: Clase amiga entre Alumno y Profesor
	Objetivo: Hacer que la clase Profesor sea amiga y pueda decidir si el alumno aprueba (nota >= 6).
*/
class Alumno
{
private:
	int nota;

public:
	Alumno(int n) : nota(n) {}
	friend class Profesor; // Profesor es amiga da de alumno
};

class Profesor
{
public:
	void evaluar(const Alumno& a)
	{
		if (a.nota >= 6)
			cout << "El alumno aprueba con nota: " << a.nota << endl;
		else
			cout << "El alumno desaprueba con nota: " << a.nota << endl;
	}
};

int main()
{
	//Ejemplo 1
	//Caja c1(42);
	//mostrarValor(c1); //Accede al miembro privado gracias a friend.

	//Ejemplo 2
	//Coche c1("Toyota");
	//Motor m;
	//m.mostrarMarca(c1);

	//Ejercicio 1:
	/*Rectangulo r1(4, 5);
	Rectangulo r2(3, 10);

	if (esMayor(r1, r2))
		cout << "El primer rectangulo es mayor." << endl;
	else
		cout << "El segundo rectangulo es mayor." << endl;*/
	//Ejercicio 2:
	Alumno a1(8), a2(4);
	Profesor p;

	p.evaluar(a1);
	p.evaluar(a2);



	return 0;
}