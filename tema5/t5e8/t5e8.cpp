#include<iostream>
#include "cabecera.h"

#define MAX 100

using namespace std;

	int main(){
		int q[MAX];
		int grado, punto, res;
		
		cout << "Introduzca el grado de su polinomio" << endl;
		cin >> grado;
		
		cout << "A continuacion, introduzca los coeficientes de menor a mayor: " << endl;
		inicializarPolinomio(q, grado);
		
		cout << "El polinomio descrito es: ";
		leerPolinomio(q, grado);
		
		cout << "\nIntroduzca un valor para evaluar el polinomio dado en 'x'" << endl;
		cin >> punto;
		
		res = evaluarPolinomio(q, grado, punto);
		cout << "El resultado de f(" << punto << ") es: " << res;
		return 0;
	}