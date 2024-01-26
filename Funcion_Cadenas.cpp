#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	// Declaración e inicialización de una variable de cadena Lyu
	string Lyu;
	Lyu = "i love c++";
	
	// Concatenar la cadena con una variable
	cout << "la cadena es:" + Lyu << endl;
	
	// Mostrar la longitud de la cadena
	cout << "La longitud de la cadena es:" << Lyu.length() << endl;
	
	// Verificar si la cadena está vacía
	cout << "¿Está ¡ vacío?" << Lyu.empty() << endl << endl;
	
	// Agregar un '!' a la cadena
	Lyu.append("!"); // Agrega un '!' después de la cadena
	cout << "La cadena modificada es:" << Lyu << endl << endl;
	
	// Declaración e inicialización de otra variable de cadena Lyu_2
	string Lyu_2;
	Lyu_2 = "I love too";
	
	// Intercambiar el contenido de dos cadenas
	Lyu.swap(Lyu_2); // Intercambiar datos de las cadenas
	cout << "Cambié la cadena modificada a:" << Lyu << endl << endl;
	
	// Encontrar la posición de un carácter en la cadena
	int site;
	site = Lyu.find('l', 0);
	cout << "la posición donde aparece l en la cadena es:" << site << endl;
	
	// Encontrar la posición de una subcadena en la cadena
	site = Lyu.find("oo", 0);
	cout << "La posición donde aparece oo en la cadena es:" << site << endl;
	
	// Bucle para encontrar todas las ocurrencias de un carácter en la cadena
	site = 0;
	do {
		site = Lyu.find('o', site);
		if (site == -1)
			cout << "Búsqueda completa, no hay otros elementos" << endl;
		else
			cout << "La posición donde aparece o en la cadena es:" << site << endl;
		site++;
	} while (site != 0);
	
	return 0;
}
