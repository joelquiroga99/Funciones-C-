/*
Titulo:Menu "Generador de numeros"
Autor: Joel Carlos Quiroga Vargas
Descripcion: diseñar un menu con las funciones para generar: un numero aleatorio(entero entre 0 - 500), un numero real aleatorio y "N" numeros primos aleatorios.
Fecha:2024 - 01 - 26
*/

#include <iostream> //Para usar librerias de iostream.
#include <cstdlib>  // Para utilizar la función system.

using namespace std;

/*Buscando encontre este opcion para admitir el uso de una sola linea para aplicar el 
Clear screen en cualquier sistemas sin tener que agregar un if a cada system (clear). 
por lo que comprendo es una opcion para agregar o definir un comando personalizado como libreria usando if
para q el comando (CLEAR_SCREEN) sea reemplazado por el correspondiente al sistema (cls) o (clear) segun corresponda.*/
#ifdef _WIN32
#define CLEAR_SCREEN "cls"
#else
#define CLEAR_SCREEN "clear"
#endif

int num;
double real;
int primos[100];

// Funcion para mostrar el menu principal
void mostrarMenu() {
	system(CLEAR_SCREEN);
	cout << "GENERADOR DE NUMEROS" << endl;
	cout << "1. Generar un numero aleatorio (0-500)" << endl;
	cout << "2. Generar un Numero aleatorio real (0-100)" << endl;
	cout << "3. Generar (N) numeros primos (aleatorios)" << endl;
	cout << "S. Salir del programa." << endl;
}

// Funcion para generar un numero aleatorio entre 0 y 500
void generarNumAleatorio(int& n) {
	n = rand() % 501;
}

// Funcion para generar un numero aleatorio real entre 0 y 100
void generarNumAleatorioReal(double& n) {
	//aqui convertimos n en double y randomizamos con rand para luego obtener un numero aleatorio real entre 0 y 100.
	n = static_cast<double>(rand() % 10001) / 100; 
}

// Funcion para verificar si un numero es primo
bool esPrimo(int n) {
	if (n < 2) {
		return false;
	}
	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}

// Funcion para generar N numeros primos aleatorios (0-100) y almacenarlos en el arreglo primos
void generarPrimosAleatorios(int cantidad) {
	int contador = 0;
	int numero = rand() % 100 + 1;
	
	while (contador < cantidad) {
		if (esPrimo(numero)) {
			primos[contador] = numero;
			contador++;
		}
		numero = rand() % 100 + 1;
	}
}

int main() {
	char eleccion;
	
	while (true) {
		mostrarMenu();
		cout << "Ingrese su eleccion: ";
		cin >> eleccion;
		
		switch (eleccion) {
		case '1':
			system(CLEAR_SCREEN);
			generarNumAleatorio(num);
			cout << "Numero generado:" <<num <<endl;
			break;
		case '2':
			system(CLEAR_SCREEN);
			generarNumAleatorioReal(real);
			cout << "Numero real generado: " << real << endl;
			break;
		case '3': {
			system(CLEAR_SCREEN);
			int cantidad;
			cout << "Ingrese la cantidad de primos a generar: ";
			cin >> cantidad;
			
			generarPrimosAleatorios(cantidad);
			
			system(CLEAR_SCREEN);
			cout <<cantidad <<" primos aleatorios generados: " <<endl;
			for (int i = 0; i < cantidad; i++) {
				cout <<"Numero primo:" << primos[i] <<endl;
			}
			cout << endl;
			
			break;
		}
		case 's':
		case 'S':
			system(CLEAR_SCREEN);
			cout << "Saliendo del programa." << endl;
			return 0;
		default:
			cout << "Opcion no valida." << endl;
		}
		
		cout << "Presione Enter para continuar";
		cin.ignore();  // Para esperar a que el usuario presione Enter
		cin.get();
	}
	
	return 0;
}
