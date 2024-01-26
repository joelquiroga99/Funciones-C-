/*
Titulo: Practico 2. Ejercicio 1
Autor: Joel Carlos Quiroga Vargas
Descripcion: Generar un programa con el uso de variables globales para realizar el siguiente menu y 
submenu:
MENU PRINCIPAL
(1) -- Operaciones con Números
(2) -- Concatenar 2 cadenas.
(s/S) – Salir
SUBMENU OP NUMEROS
1) - - Suma de 2 números.
2) - - División de 2 números.
m/M) - - Volver al Menu principal
Fecha: 24 - 01 - 25
*/
#include <iostream>
#include <cstdlib>

using namespace std;

double num1, num2;
string cadena1, cadena2;

void realizarOperacionNumerica(char opcion) {
	switch (opcion) {
	case '1':
		cout << "Ingrese dos numeros para la suma:" << endl;
		cin >> num1 >> num2;
		cout << "La suma es: " << num1 + num2 << endl;
		break;
	case '2':
		cout << "Ingrese dos numeros para la division:" << endl;
		cin >> num1 >> num2;
		if (num2 != 0) {
			cout << "La division es: " << num1 / num2 << endl;
		} else {
			cout << "No se puede dividir por cero." << endl;
		}
		break;
	case 'm':
	case 'M':
		cout << "Volviendo al Menu principal." << endl;
		break;
	default:
		cout << "Opcion no valida" << endl;
		break;
	}
}

void concatenarCadenas() {
	cout << "Ingrese la primera cadena: ";
	cin >> cadena1;
	cout << "Ingrese la segunda cadena: ";
	cin >> cadena2;
	
	string resultado = cadena1 + " " + cadena2;
	
	cout << "Cadenas concatenadas: " << resultado << endl;
}

void mostrarMenuPrincipal() {
	cout << "MENU PRINCIPAL" << endl;
	cout << "1. Operaciones con Numeros" << endl;
	cout << "2. Concatenar 2 cadenas" << endl;
	cout << "S. Salir del programa" << endl;
}

void mostrarSubMenuNumeros() {
	char opcionNumeros;
	
	do {
		cout << "SUBMENU OP NUMEROS" << endl;
		cout << "1. Suma de 2 numeros." << endl;
		cout << "2. Division de 2 numeros." << endl;
		cout << "M. Volver al Menu principal" << endl;
		
		cout << "Ingrese su opcion: ";
		cin >> opcionNumeros;
		
		realizarOperacionNumerica(opcionNumeros);
		
	} while (opcionNumeros != 'm' && opcionNumeros != 'M');
}

int main() {
	char opcionPrincipal;
	
	do {
		mostrarMenuPrincipal();
		cout << "Ingrese su opcion: ";
		cin >> opcionPrincipal;
		
		switch (opcionPrincipal) {
		case '1':
			mostrarSubMenuNumeros();
			break;
		case '2':
			concatenarCadenas();
			break;
		case 's':
		case 'S':
			cout << "Saliendo del programa." << endl;
			break;
		default:
			cout << "Opcion no valida. Intente de nuevo." << endl;
			break;
		}
		
	} while (opcionPrincipal != 's' && opcionPrincipal != 'S');
	
	return 0;
}
