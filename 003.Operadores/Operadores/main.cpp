#include <iostream>
#include <bitset>

int main()
{

	//Aritmeticos
	
	//suma -> a + b
	//5 + 2

	std::cout << "(5 + 2) : " << (5 + 2) << std::endl;
 
	//resta -> a - b
	//5 - 3

	std::cout << "(5 - 3) : " << (5 - 3) << std::endl;

	//multiplicacion -> a * b
		//5 * 4

	std::cout << "(5 * 4) : " << (5 * 4) << std::endl;

	//division -> a / b
		//10 / 2

	std::cout << "(10 / 2) : " << (10 / 2) << std::endl;

	//modulo -> a % b (resto de division)

	std::cout << "(10 % 2) : " << (10 % 2) << std::endl;

	int num1{ 10 };

	if (num1 % 2 == 0)
	{
		std::cout << "El numero " << num1 << " es par." << std::endl;
	}
	else
	{
		std::cout << "El numero " << num1 << " es impar." << std::endl;
	}

	//Bit a bit

	//AND -> a & b
	//5 & 3
	//5 -> 0101 (binario)
	//3 -> 0011 (binario)

	//0101
	//0011
	//0001 = 1 (en decimal)

	std::cout << "(a & b) : " << (5 & 3) << std::endl;
	std::cout << "(a & b) : " << std::bitset<4>(1) << std::endl;

	//OR -> a | b
	//5 | 3
	//5 -> 0101 (binario)
	//3 -> 0011 (binario)

	//0101
	//0011
	//0111 = 7 (en decimal)

	std::cout << "(a | b) : " << (5 | 3) << std::endl;
	std::cout << "(a | b) : " << std::bitset<4>(7) << std::endl;

	//XOR -> a ^ b
	//5 ^ 3
	//5 -> 0101 (binario)
	//3 -> 0011 (binario)

	//0101
	//0011
	//0110 = 6 (en decimal)

	std::cout << "(a ^ b) : " << (5 ^ 3) << std::endl;
	std::cout << "(a ^ b) : " << std::bitset<4>(6) << std::endl;

	//NOT -> ~a 
	//~5
	//~5 -> 0101 (binario)
	//00000101 8 bits

	//11111010
	//00000101 + 1
	//00000110 = -6

	std::cout << "(~a) : " << (~5) << std::endl;
	std::cout << "(~a) : " << std::bitset<8>(-6) << std::endl;

	//<< -> a << b
	//5 << 1 

	std::cout << "(5 << 1) : " << (5 << 1) << std::endl;

	//>> -> a >> b
	//10 >> 1 

	std::cout << "(10 >> 1) : " << (10 >> 1) << std::endl;
	
	//Ejercicio:
	//elegir un numero alpicarle el operador not y dejar en los comentarios que resultado te dio en decimal,
	//Como vimos el ejemplo de el ~5 que da -6.
	//hacer la conversion de complemento y demostrar mediante bitset que el resultado es correcto, podes usar calculadora para el calculo.

	return 0;
}