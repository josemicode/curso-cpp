#include<iostream>
#include"cabecera.h"

#define MAX 100

using namespace std;

	int main(){
		int A[MAX][MAX];
		double u[MAX];
		int m, n;
		
		cout << "Introduzca el numero de filas: " << endl;
		cin >> m;
		cout << "Introduzca el numero de columnas: " << endl;
		cin >> n;
		
		llenarMatriz(A, m, n);
		leerMatriz(A, m, n);
		
		mediaColumnas(A, m, n, u);
		leerVector(u, n);
		
		return 0;
	}