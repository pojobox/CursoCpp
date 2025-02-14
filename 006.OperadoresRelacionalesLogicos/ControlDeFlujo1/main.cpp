#include <iostream>

int main()
{

	//IF ELSE

	/*int Edad;
	std::cout << "Para sacar el registro de conducir por favor, indique su edad: " << std::endl;
	std::cin >> Edad;

	if (Edad > 18)
	{
		std::cout << "Puede sacar el registro de conducir!.\n";
	}
	else if (Edad > 16)
	{
		std::cout << "Para sacar el registro debe firmar al menos uno de sus padres!.\n";
	}
	else
	{
		std::cout << "Lo siento, no cumple con la edad minima para sacar el registro de conducir!.\n";
	}*/

	//SWITCH CASE

	/*int opcion;
	std::cout << "Ingrese una opcion (1...3): " << std::endl;
	std::cin >> opcion;

	switch (opcion)
	{
	case 1:
		std::cout << "Elegiste la opcion 1.\n";
		break;
	case 2:
		std::cout << "Elegiste la opcion 2.\n";
		break;
	case 3:
		std::cout << "Elegiste la opcion 3.\n";
		break;
	default:
		std::cout << "Opcion invalida.\n";
		break;
	}*/

	//Operadores Relacionales y Logicos
	//bool interruptor1 = true;
	//bool interruptor2 = true;
	//bool luz;

	//std::cout << std::boolalpha; // para imprimir true or false en lugar de 1/0

	//if (interruptor1 == true && interruptor2 == true)
	//{
	//	std::cout << "Ambos interruptores estan encendidos!.\n";
	//	luz = true;
	//	if (luz == true)
	//	{
	//		std::cout << "Luz encendida!.\n";
	//	}
	//}
	//else
	//{
	//	std::cout << "Alguno o ambos interruptores estan apagados!.\n";
	//	luz = false;

	//	if (luz == false)
	//	{
	//		std::cout << "Luz apagada!.\n";
	//	}
	//}

	/*
		Ejercicio: 
		Evaluar si un numero es positivo, negativo o cero
		1)Pedir un numero al usuario.
		2)Evaluar con if-else
		3)Mostrar el resultado con cout.
	*/

	int num;
	std::cout << "Ingrese un numero: ";
	std::cin >> num;

	if (num > 0)
	{
		std::cout << "El numero es positivo.\n";
	}
	else if (num < 0)
	{
		std::cout << "El numero es negativo.\n";
	}
	else
	{
		std::cout << "El numero es cero.\n";
	}


	return 0;
}