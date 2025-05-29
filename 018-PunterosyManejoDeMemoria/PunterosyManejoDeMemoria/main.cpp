#include <iostream>

//funcion para validar puntero null
void inicializar(int*& p)
{
	if (p == nullptr)
	{
		p = new int(10);
		std::cout << "Memoria asignada y valor inicializado a 10" << std::endl;
	}
	else {
		std::cout << "El puntero ya tiene memoria asignada." << std::endl;
	}

}
//funcion para asignar memoria a traves de un puntero doble
void crearNumero(int** puntero)
{
	*puntero = new int;
	**puntero = 42;
}

int main()
{
	////Ejemplo: Modificar el valor original de una variable a traves de su doble puntero

	//int x = 10;
	//int* p = &x;
	//int** pp = &p;

	//std::cout << "Numero original x: " << x << std::endl;
	//std::cout << "Numero a traves de desreferenciación *p: " << *p << std::endl;
	//std::cout << "Numero a traves de desreferenciación del puntero doble **pp: " << **pp << std::endl;

	//**pp = 30;

	//std::cout << "Numero original x: " << x << std::endl;
	//std::cout << "Numero a traves de desreferenciación *p: " << *p << std::endl;
	//std::cout << "Numero a traves de desreferenciación del puntero doble **pp: " << **pp << std::endl;


	/*
		Ejercicio 1: Validar el puntero y asignar si es nulo
	*/
	/*int* ptr = nullptr;

	inicializar(ptr);
	std::cout << "Valor: " << *ptr << std::endl;

	delete ptr;*/


	/*
		Ejercicio 2: Uso de puntero doble para asignar memoria desde una función.
	*/
	int* p = nullptr;

	crearNumero(&p);
	std::cout << "Numero creado: " << *p << std::endl;

	delete p;


	return 0;
}