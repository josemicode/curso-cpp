#include<iostream>
#include"cabecera.h"

#define MAX 100

using namespace std;

	int main(){
		Complejo c[MAX];
		int n;
		
		cout << "Introduzca el numero de elementos del vector: " << endl;
		cin >> n;
		
		escribirVectorCp(c, n);
		leerVectorCp(c, n);
		mediaComplejos(c, n);
		
		return 0;
	}