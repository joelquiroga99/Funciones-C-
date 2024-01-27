#include <iostream>
#include <cctype>
using namespace std;

string nombrecompleto, nombre, a_paterno, a_materno;

// Función para mostrar el apellido paterno, materno y nombre
void mostrar_PMN() {
	cout << "Mostrando apellido paterno, materno y nombre:" << endl;
	cout << a_paterno << " " << a_materno << " " << nombre << endl;
}

// Función para separar el nombre completo en nombre, apellido paterno y apellido materno
void separar_datos() {
	int ini, fin;
	ini = 0;
	
	// Encontrar la posición del primer espacio en blanco
	fin = nombrecompleto.find(" ", ini);
	
	// Extraer el nombre y convertir la primera letra a mayúscula
	nombre = nombrecompleto.substr(ini, fin - ini);
	nombre[0] = toupper(nombre[0]);
	
	ini = fin + 1;
	
	// Encontrar la posición del segundo espacio en blanco
	fin = nombrecompleto.find(" ", ini);
	
	// Extraer el apellido paterno y convertir la primera letra a mayúscula
	a_paterno = nombrecompleto.substr(ini, fin - ini);
	a_paterno[0] = toupper(a_paterno[0]);
	
	ini = fin + 1;
	
	// Extraer el apellido materno sin convertir la primera letra a mayúscula
	a_materno = nombrecompleto.substr(ini);
}

// Función para convertir la primera letra de cada componente a mayúscula
void poner_may() {
	nombre[0] = toupper(nombre[0]);
	a_paterno[0] = toupper(a_paterno[0]);
	a_materno[0] = toupper(a_materno[0]);
}

int main() {
	// Solicitar al usuario ingresar el nombre completo
	cout << "Ingrese nombre completo: ";
	getline(cin, nombrecompleto);
	
	// Llamar a la funcion para separar los datos del nombre completo
	separar_datos();
	
	// Llamar a la funcion para convertir la primera letra de cada componente a mayúscula
	poner_may();
	
	// Mostrar los resultados
	cout << "El nombre separado es:" << endl;
	cout << "Nombre: " << nombre << endl;
	cout << "Apellido Paterno: " << a_paterno << endl;
	cout << "Apellido Materno: " << a_materno << endl << endl;
	
	// Llamar a la funcion para mostrar el apellido paterno, materno y nombre
	mostrar_PMN();
	
	return 0;
}


