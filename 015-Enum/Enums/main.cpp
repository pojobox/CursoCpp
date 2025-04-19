#include <iostream>


//Estado de conexion

enum EstadoConexion
{
	Desconectado,
	Conectando,
	Conectado
};

//Dias de la semana
enum Dia
{
	Lunes,
	Martes,
	Miercoles,
	Jueves,
	Viernes,
	Sabado,
	Domingo
};
/*
	Ejercicio 1: Semaforo
	Objetivo : definir un enum ColorSemaforo con los valores:
		Rojo 
		Amarillo
		Verde
		Posteriormente pedir al usuario que elija un numero (0 a 2) y mostrar 
		0 -> detenerse
		1 -> Precaucion
		2 -> Avanzar
		Pista: Deben utilizar un switch case.
*/

enum ColorSemaforo
{
	Rojo,
	Amarillo,
	Verde
};

/*
	Ejercicio 2: Tipo de usuario
	Objetivo: Crear un enum TipoDeUsuario con los valores:
	Invitado,
	Registrado,
	Administrador

	A continuacion escribir una funcion mostrarPermisos() que reciba un tipo de usuario y muestre sus permisos.

	Invitado -> solo lectura
	Registrado -> Lectura y escritura
	Administrador -> Acceso total
	Pista: deben usar una estructura IF.
*/

enum TipoDeUsuario
{
	Invitado,
	Registrado,
	Administrador
};

//Funcion mostrar permisos
void mostrarPermisos(TipoDeUsuario tipo)
{
	if (tipo == Invitado)
	{
		std::cout << "Permisos: Solo lectura." << std::endl;
	}
	else if (tipo == Registrado)
	{
		std::cout << "Permisos: Lectura y escritura" << std::endl;
	}
	else if (tipo == Administrador)
	{
		std::cout << "Permisos: Acceso total." << std::endl;
	}
	else
	{
		std::cout << "Tipo invalido." << std::endl;
	}
}

int main()
{

	//EstadoConexion estado = Conectado;

	/*if (estado == Conectando)
	{
		std::cout << "Conectando al servidor!..." << std::endl;
	}
	else if (estado == Conectado)
	{

		std::cout << "Bienvenido al servidor!\n";
	}*/


	/*Dia hoy = Viernes;

	switch (hoy)
	{
	case Lunes:
		std::cout << "Comienza la semana\n";
		break;
	case Martes:
		std::cout << "Segundo dia\n";
		break;
	case Miercoles:
		std::cout << "Siempre en el medio vos miercoles eh\n";
		break;
	case Jueves:
		std::cout << "Ya casi estamos\n";
		break;
	case Viernes:
		std::cout << "Por fin viernes\n";
		break;
	case Sabado:
		std::cout << "Dia de mirar pelis\n";
		break;
	case Domingo:
		std::cout << "Dia de estar en familia!!!\n";
		break;
	default:
		std::cout << "Dia inexistente\n";
		break;
	}*/

	//Ejercicio 1 resolucion Semaforo

	/*int Opcion;
	std::cout << "Por favor ingrese el color del semaforo (0 = Rojo, 1 = Amarillo, 2 = Verde)\n";
	std::cin >> Opcion;

	ColorSemaforo color = static_cast<ColorSemaforo>(Opcion);

	switch (color)
	{
	case Rojo:
		std::cout << "Detenerse" << std::endl;
		break;
	case Amarillo:
		std::cout << "Precaucion" << std::endl;
		break;
	case Verde:
		std::cout << "Avanzar" << std::endl;
		break;
	default:
		std::cout << "Opcion invalida" << std::endl;
		break;
	}*/

	//Ejercicio 2 resolucion Tipo de usuario

	int tipoInput;
	std::cout << "Ingrese tipo de usuario (0 = Invitado, 1 = Registrado, 2 = Administrador)\n";
	std::cin >> tipoInput;

	TipoDeUsuario usuuario = static_cast<TipoDeUsuario>(tipoInput);

	mostrarPermisos(usuuario);


	return 0;
}