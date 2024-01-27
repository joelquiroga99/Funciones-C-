#include <iostream>
#include <cctype>
using namespace std;

string nombrecompleto, nombre, a_paterno, a_materno;

// Funci�n para mostrar el apellido paterno, materno y nombre
void mostrar_PMN() {
	cout << "Mostrando apellido paterno, materno y nombre:" << endl;
	cout << a_paterno << " " << a_materno << " " << nombre << endl;
}

// Funci�n para separar el nombre completo en nombre, apellido paterno y apellido materno
void separar_datos() {
	int ini, fin;
	ini = 0;
	
	// Encontrar la posici�n del primer espacio en blanco
	fin = nombrecompleto.find(" ", ini);
	
	// Extraer el nombre y convertir la primera letra a may�scula
	nombre = nombrecompleto.substr(ini, fin - ini);
	nombre[0] = toupper(nombre[0]);
	
	ini = fin + 1;
	
	// Encontrar la posici�n del segundo espacio en blanco
	fin = nombrecompleto.find(" ", ini);
	
	// Extraer el apellido paterno y convertir la primera letra a may�scula
	a_paterno = nombrecompleto.substr(ini, fin - ini);
	a_paterno[0] = toupper(a_paterno[0]);
	
	ini = fin + 1;
	
	// Extraer el apellido materno sin convertir la primera letra a may�scula
	a_materno = nombrecompleto.substr(ini);
}

// Funci�n para convertir la primera letra de cada componente a may�scula
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
	
	// Llamar a la funcion para convertir la primera letra de cada componente a may�scula
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


