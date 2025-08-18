#include <iostream>
#include <memory>
using namespace std;


//Uso de unique_ptr
class Persona
{
	string nombre;
public:
	Persona(string n) :nombre{ n } {}
	void mostrar() { cout << "Nombre: " << nombre << endl;}


};

//Ejemplo de uso shared_ptr y weak_ptr

class Curso
{
public:
	string nombre;
	Curso(string n) : nombre(n) {}
	~Curso() { cout << "Curso: " << nombre << "Eliminado." << endl;}
};

/*
	Ejercicio 1:Clase libro con unique_ptr
	Objetivo: Crear una clase Libro con un atributo titulo, usa unique_ptr para administrarlo, mostrando el titulo y transfiriendo la propiedad.
*/
class Libro
{
	string titulo;
public:
	Libro(string t) : titulo(t){}
	void mostrar() { cout << "Libro: " << titulo << endl; }


};


/*
	Ejercicio 2: Clase Estudiante con shared_ptr
	Objetivo: Crear una clase Estudiante con un atributo nombre, usa shared_ptr para que dos variables compartan el mismo objeto y luego mostra cuantas referencias tiene.
*/

class Estudiante
{
	string nombre;
public:
	Estudiante(string n) : nombre(n) {}
	void mostrar() { cout << "Estudiante: " << nombre << endl; }

};

int main()
{
	//Ejemplo 1
	//unique_ptr<Persona> p1 = make_unique<Persona>("Juan");
	//p1->mostrar();

	////Transferencia de propiedad con move
	//unique_ptr<Persona> p2 = move(p1);
	//if (!p1) cout << "p1 ya no apunta a nada" << endl;
	//p2->mostrar();


	//Ejemplo 2
	//shared_ptr<Curso> c1 = make_shared<Curso>("C++");
	//shared_ptr<Curso> c2 = c1; // Ahora los  dos punteros comparten el mismo objeto.

	//cout << "Cantidad de referencias: " << c1.use_count() << endl;

	//weak_ptr<Curso> c3 = c1; //No incrementa el contador
	//cout << "Cantidad de referencias (con weak ptr) " << c1.use_count() << endl;

	//if (auto temp = c3.lock())
	//{
	//	cout << "Accediendo a curso desde weak_ptr " << temp->nombre << endl;
	//}


	//Ejercicio 1:
	/*unique_ptr<Libro> l1 = make_unique<Libro>("El quijote");
	l1->mostrar();

	unique_ptr<Libro> l2 = move(l1);
	if (!l1) cout << "L1 ya no tiene el libro. " << endl;
	l2->mostrar();*/

	//Ejercicio 2:
	shared_ptr<Estudiante> e1 = make_shared<Estudiante>("Ana");
	shared_ptr<Estudiante> e2 = e1;
	shared_ptr<Estudiante> e3 = e1;

	e1->mostrar();
	e2->mostrar();

	cout << "Cantidad de referencias: " << e1.use_count() << endl;

	return 0;
}