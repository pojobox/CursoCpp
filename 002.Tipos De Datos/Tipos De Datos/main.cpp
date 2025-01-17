#include <iostream>


int main()
{
	
	////integrals o enteros
	std::cout << "sizeof(signed int): " << sizeof(int) << std::endl;//-2,147,483,648 a 2,147,483,647
	std::cout << "sizeof(unsigned int): " << sizeof(unsigned int) << std::endl;//0 a 4,294,967,295
	std::cout << "sizeof(short): " << sizeof(short) << std::endl;// -32,768 a 32,767
	std::cout << "sizeof(unsigned short): " << sizeof(unsigned short) << std::endl; //0 a 65,535
	std::cout << "sizeof(long): " << sizeof(long) << std::endl; //-2,147,483,648 a 2,147,483,647 (4 bytes) -9,223,372,036,854,775,808 a 9,223,372,036,854,775,807 (8 bytes)
	std::cout << "sizeof(unsigned long): " << sizeof(unsigned long) << std::endl;// 0 a 4, 294, 967, 295 (4 bytes) 0 a 18, 446, 744, 073, 709, 551, 615 (8 bytes)
	std::cout << "sizeof(long long): " << sizeof(long long) << std::endl;// -9, 223, 372, 036, 854, 775, 808 a 9, 223, 372, 036, 854, 775, 807
	std::cout << "sizeof(unsigned long long): " << sizeof(unsigned long long) << std::endl;// 0 a 18,446,744,073,709,551,615
	std::cout << "sizeof(char): " << sizeof(char) << std::endl; //-128 a 127
	std::cout << "sizeof(unsigned char): " << sizeof(unsigned char) << std::endl; // 0 a 255

	////flotantes son los que admiten decimales

	std::cout << "sizeof(float): " << sizeof(float) << std::endl; // 3.14
	std::cout << "sizeof(double): " << sizeof(double) << std::endl; // 3.141592653589793
	std::cout << "sizeof(long double): " << sizeof(long double) << std::endl; //3.141592653589793238462643383279


	////Booleanos se usan para realizer condicionales
	std::cout << "sizeof(bool) :" << sizeof(bool) << std::endl; // 1 / 0 

	




	return 0;
}