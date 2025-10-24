#include <iostream>
#include <vector>
#include <string>
#include <algorithm> // sort , remove_if, unique
#include <numeric> //accumulate
#include <iomanip>


//Ejemplo 1: Operaciones basicas, size /capacity, reserve, at

//int main(){
//	std::vector<int> v;
//	std::cout << "size=" << v.size() << ",Capacity=" << v.capacity() << "\n";
//
//	v.reserve(5); //sugerimos una capacidad inicial
//	std::cout << "reserve(5) -> capacity=" << v.capacity() << "\n";
//
//
//	v.push_back(10);
//	v.push_back(20);
//	v.emplace_back(30); // inserta construyendo in place
//
//	std::cout << "Elementos: ";
//	for (auto x : v) std::cout << x << " ";
//	std::cout << "\nsize=" << v.size() << " capacity=" << v.capacity() << "\n";
//
//
//	//Acceso seguro at
//	try {
//		std::cout << "v.at(1) = " << v.at(1) << "\n";
//		std::cout << "v.at(10) = " << v.at(10) << "\n"; // lanza excepcion
//	}
//	catch (const std::out_of_range& e) {
//		std::cout << "Exception: " << e.what() << "\n";
//	}
//
//
//	//liberar exceso de capacidad
//	v.shrink_to_fit();
//	std::cout << "shrink_to_fit -> capacity= " << v.capacity() << "\n";
//
//	return 0;
//}

//Ejemplo 2: Ordenar, remover por condicion (erase- remove), y duplicar

//int main()
//{
//	std::vector<int> v{ 7,2,2,9,4,6,6,1,8,3 };
//
//	//1 Ordenar
//	std::sort(v.begin(), v.end()); // O(n log n)
//	std::cout << "Ordenado: ";
//	for (auto x : v) std::cout << x << " ";
//	std::cout << "\n";
//
//	//2 Eliminar los pares: erase-remove
//	v.erase(std::remove_if(v.begin(), v.end(),
//		[](int x) {return x % 2 == 0; }),
//		v.end());
//	std::cout << "Sin pares: ";
//	for (auto x : v) std::cout << x << " ";
//	std::cout << "\n";
//
//	//3 Insertar duplicados y deduplicamos con unique(requiere orden)
//	v.insert(v.end(), { 3,3,7,7 });
//	std::sort(v.begin(), v.end());
//	v.erase(std::unique(v.begin(), v.end()), v.end());
//
//	std::cout << "Sin duplicados: ";
//	for (auto x : v) std::cout << x << " ";
//	std::cout << "\n";
//
//	//4 Suma total
//	int suma = std::accumulate(v.begin(), v.end(), 0);
//	std::cout << "Suma: " << suma << "\n";
//
//	return 0;
//}

/*
Ejercicio 1: Estadisticas basicas
Objetivo: Leer N, reservar espacio, cargar N enteros y mostrar minimo , maximo y promedio
*/
//int main()
//{
//	int N;
//	std::cout << "Cantidad de numeros: ";
//	std::cin >> N;
//
//
//	std::vector<int> v;
//	v.reserve(N);
//
//	for (int i = 0; i < N; i++)
//	{
//		int x; std::cin >> x;
//		v.push_back(x);
//	}
//
//	if (v.empty()) {
//		std::cout << "No hay datos.\n";
//		return 0;
//	}
//
//	auto [minIt, maxIt] = std::minmax_element(v.begin(), v.end());
//	double prom = static_cast<double>(std::accumulate(v.begin(), v.end(), 0)) / v.size();
//
//	std::cout << "Min: " << *minIt << "\n";
//	std::cout << "Max: " << *maxIt << "\n";
//	std::cout << std::fixed << std::setprecision(2)
//		<< "Promedio: " << prom << "\n";
//		
//	return 0;
//}


/*
Ejercicio 2:Limpiar y deduplicar strings
Objetivo: Dado un vector<std::string>, eliminar vacios y deduplicar
pista: en esta version ordenamos para deduplicar facil, si queres mantener el orden de aparicion, podes usar un std::unordered_set.
*/

int main()
{
	std::vector<std::string> v{
		"c++"," ","stl","vector","c++","stl"," ","algoritmos"
	};

	//Eliminar los vacios
	v.erase(std::remove_if(v.begin(), v.end(),

		[](const std::string& s) {return s.empty();
		}),
		v.end());

	//Deduplicar ordenado (cambia el orden original)
	std::sort(v.begin(), v.end());
	v.erase(std::unique(v.begin(), v.end()), v.end());

	std::cout << "Resultado: ";
	for (auto& s : v) std::cout << s << " | ";
	std::cout << "\n";

	return 0;
}