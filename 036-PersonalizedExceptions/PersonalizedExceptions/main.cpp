#include <iostream>
#include <exception>
#include <string>
using namespace std;


//Ejemplo 1: Excepcion personalizada simple
class DivisionPorCero : public exception {
public:
	const char* what() const noexcept override {
		return "Error: No se puede dividir por cero.";
	}
};

double dividir(double a, double b)
{
	if (b == 0) throw DivisionPorCero();
	return a / b;
}

//Ejemplo 2: Excepcion con mensaje dinamico
class ArchivoError : public exception {
	string mensaje;
public:
	ArchivoError(const string& nombre)
	{
		mensaje = "Error al abrir el archivo: " + nombre;
	}
	const char* what() const noexcept override {
		return mensaje.c_str();
	}
};

void abrirArchivo(const string& nombre) {
	//Simulamos que el archivo no existe.
	throw ArchivoError(nombre);
}

/*
	Ejercicio 1: Excepcion "Edad Invalida"
	Objetivo: Crear una clase EdadInvalida que se lance si el usuario ingresa una edad negativa o superior a 120.
*/
class EdadInvalida : public exception {
public:
	const char* what() const noexcept override {
		return "Edad Invalida: debe estar entre 0 y 120.";
	}
};

void validarEdad(int edad) {
	if (edad < 0 || edad > 120)
	{
		throw EdadInvalida();
	}
	else {
		cout << "Edad valida : " << edad << endl;
	}
}

/*
	Ejercicio 2:Excepcion de saldo insuficiente.
	Objetivo: Crear una clase SaldoInsuficiente y utilizarla para controlar intentos de retiro mayores al saldo.
*/
class SaldoInsuficiente : public exception {
public:
	const char* what() const noexcept override {
		return "Error: saldo insuficiente para realizar la operacion.";
	}
};

double retirar(double saldo, double monto) {
	if (monto > saldo) throw SaldoInsuficiente();
	return saldo - monto;
}


int main()
{
	//Ejemplo 1:
	//try {
	//	cout << dividir(10, 2) << endl;
	//	cout << dividir(8, 0) << endl; //lanza la excepcion personalizada
	//}
	//catch (const DivisionPorCero& e){
	//	cout << e.what() << endl;
	//}

	//Ejemplo 2:
	/*try {
		abrirArchivo("datos.txt");
	}
	catch (const ArchivoError& e)
	{
		cout << e.what() << endl;
	}*/

	//Ejercicio 1:
	//try {
	//	validarEdad(25);
	//	validarEdad(150); //lanza la excepcion
	//}
	//catch (const EdadInvalida& e){
	//	cout << e.what() << endl;
	//}
	
	//Ejercicio 2:
	double saldo = 500;

	try {
		saldo = retirar(saldo, 200);
		cout << "Saldo restante: " << saldo << endl;

		saldo = retirar(saldo, 400); //lanzar la excepcion
	}
	catch (const SaldoInsuficiente& e)
	{
		cout << e.what() << endl;
	}

	return 0;
}