#include<iostream>
#include"cabecera.h"
#define MAX 100
 
using namespace std;

	int main(){
				
		int A[MAX][MAX];
		int m, n, a, b;
		
		cout << "Introduzca el numero de filas: " << endl;
		cin >> m;
		cout << "Introduzca el numero de columnas: " << endl;
		cin >> n;
		
		llenarMatriz(A, m, n);
		leerMatriz(A, m, n);
		
		cout << "Introduzca el indice de la fila a: " << endl;
		cin >> a;
		cout << "Introduzca el indice de la fila b: " << endl;
		cin >> b;
		
		cambiarFilas(A, m, n, a, b);
		leerMatriz(A, m, n);
		
		return 0;
	}