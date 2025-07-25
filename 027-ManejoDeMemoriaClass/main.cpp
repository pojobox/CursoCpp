#include <iostream>
#include <cstring>
using namespace std;

//Ejemplo 1:Clase Persona con nombre dinamico
class Persona
{
private:
    char* nombre;

public:
    Persona(const char* n)
    {
        nombre = new char[strlen(n) + 1]; // el +1 es para el caracter nulo
        strcpy_s(nombre, strlen(n) + 1, n);
    }

    ~Persona()
    {
        delete[] nombre;
    }

    void saludar()
    {
        cout << "Hola, soy: " << nombre << endl;
    }
};


//Ejemplo 2: Libro con constructor de copia
class Libro
{
private:
    char* titulo;

public:
    Libro(const char* t)
    {
        titulo = new char[strlen(t) + 1];
        strcpy_s(titulo, strlen(t) + 1, t);
    }

    //Constructor de copia
    Libro(const Libro& otro)
    {
        titulo = new char[strlen(otro.titulo) + 1];
        strcpy_s(titulo, strlen(otro.titulo) + 1, otro.titulo);
    }

    ~Libro()
    {
        delete[] titulo;
    }

    void mostrar()
    {
        cout << "Titulo del libro: " << titulo << endl;
    }
};

/*
    Ejercicio 1: Clase Mascota
    Objetivo : Crear la clase Mascota que permita mostrar el nombre dinamicamente.
*/
class Mascota
{
private:
    char* nombre;

public:
    Mascota(const char* n)
    {
        nombre = new char[strlen(n) + 1];
        strcpy_s(nombre, strlen(n) + 1, n);
    }

    ~Mascota()
    {
        delete[] nombre;
    }

    void presentarse()
    {
        cout << "Soy: " << nombre << ", tu mascota!" << endl;
    }


};


/*
    Ejercicio 2: Clase Pelicula
    Objetivo: Crear la clase Pelicula que permita mostrar dinamicamente que pelicula se esta reproduciendo.
*/
class Pelicula
{
private:
    char* titulo;

public:
    Pelicula(const char* t)
    {
        titulo = new char[strlen(t) + 1];
        strcpy_s(titulo, strlen(t) + 1, t);
    }

    ~Pelicula()
    {
        delete[] titulo;
    }

    void reproducir()
    {
        cout << "Reproduciendo: " << titulo << endl;
    }

};

int main() {
 
    //Ejemplo 1:
    /*Persona p1("Lucia");
    p1.saludar();*/

    //Ejemplo 2:
    //Libro l1("1984");
    //Libro l2 = l1; //LLamamos al constructor de copia
    //l1.mostrar();
    /*l2.mostrar();*/

    //Ejercicio 1:
    /*Mascota m("Kiara");
    m.presentarse();*/

    //Ejercicio 2:
    Pelicula p("Matrix");
    p.reproducir();



    return 0;
}
