#include <iostream>
#include <math.h>
/* Acceso a espacio de nombres para librerias estandar C++ */
using namespace std;
/* Funcion main es para dar el punto de inicio o ejecuion del programa */
int main() {
	/* Declaracion de variables */
	int edad = 0;
	cout << "Ingrese su edad: ";
	cin >> edad;
	
	switch(edad) {
		case 0 ... 9: // Bloque de instrucciones 1;
			cout << "Niños";
			break;
		case 10 ... 19:
			cout << "Adolescentes";
			break;
		case 20 ... 24:
			cout << "Jovenes";
			break;
		case 25 ... 59:
			cout << "Adulto";
			break;
		case 60 ... 150:
			cout << "Adulto Mayor";
			break;
		default:
			cout << "Edad Incorrecta.";
	}
	
	return 0;
}
