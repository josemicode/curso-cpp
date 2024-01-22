#include<iostream>
#include "cabecera.h"

#define MAX 100

using namespace std;

	int main(){
		int u[MAX];
		int l;
		
		cout << "Introduzca un numero de elementos para el vector: " << endl;
		cin >> l;
		inicializarVector(u, l);
		leerVector(u, l);
		cout << "\nSuma: " << sumatorioVector(u, l) << "\nMedia: " << mediaVector(u, l) << endl;
		cout << "Varianza: " << varianzaVector(u, l) << endl;
		cout << "MAX = " << maxVector(u, l) << "\nMIN = " << minVector << endl;
		return 0;
	}