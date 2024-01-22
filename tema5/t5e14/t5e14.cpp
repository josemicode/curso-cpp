#include<iostream>
#include"cabecera.h"

#define MAX 100

using namespace std;

	int main(){
		struct matriz a;
		
		cout << "Introduzca el numero de filas de la matriz: " << endl;
		cin >> a.fil;
		
		cout << "Introduzca el numero de columnas de la matriz: " << endl;
		cin >> a.col;
		
		a = llenarMatriz(a);
		leerMatriz(a);
		sumatorioDiagonal(a);
		
		return 0;
	}