#include <iostream>
using namespace std;


//Ejemplo 1 : Division por cero

int dividir(int a, int b)
{
	if (b == 0)
	{
		throw "Error: Division por cero!";
	}
	return a / b;
}

//Ejemplo 2 :Multiples catch
//void probarExcepcion(int tipo)
//{
//	if (tipo == 1) throw 404;
//	if (tipo == 2) throw string("Archivo no encontrado");
//	if (tipo == 3) throw 3.14;
//}

/*
	Ejercicio 1: Validacion de edad
	Objetivo: Lanzar una excepcion si la edad es negativa.
	Devolver un mensaje valido si la edad es correcta.
*/
void validarEdad(int edad)
{
	if (edad < 0) throw "La edad no puede ser negativa";
	cout << "Edad valida: " << edad << endl;
}
/*
	Ejercicio 2: Cajero automatico
	Objetivo: Lanzar una excepcion si el monto es mayor al saldo.
	Restar el monto del saldo si es valido.
*/

double retirar(double saldo, double monto)
{
	if (monto > saldo) throw "Saldo insuficiente!";
	return saldo - monto;
}

int main()
{
	//Ejemplo 1
	//try
	//{
	//	cout << dividir(10, 2) << endl;
	//	cout << dividir(8, 0) << endl; //lanza la excepcion
	//}
	//catch (const char* msg)
	//{
	//	cout << msg << endl;
	//}

	//Ejemplo 2
	/*try {
		probarExcepcion(3);
	}
	catch (int e)
	{
		cout << "Error numerico: " << e << endl;\
	}
	catch (string& s)
	{
		cout << "Error de string: " << s << endl;
	}
	catch (...)
	{
		cout << "Error desconocido" << endl;
	}*/

	//Ejercicio 1 Resuelto:
	//try {
	//	validarEdad(25);
	//	validarEdad(-7); //lanza la excepcion
	//}
	//catch (const char* msg)
	//{
	//	cout << "Error: " << msg << endl;
	//}

	//Ejercicio 2:
	double saldo = 1000;

	try {
		cout << "Saldo actual: " << saldo << endl;
		saldo = retirar(saldo, 200);
		cout << "Saldo luego de retirar 200: " << saldo << endl;

		saldo = retirar(saldo, 900); //lanza excepcion
	}
	catch (const char* msg)
	{
		cout << "Error: " << msg << endl;
	}


	return 0;

}