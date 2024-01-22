#include<iostream>
#include"cabecera.h"

#define MAX 100

using namespace std;

	int main(){
		int A[MAX][MAX];
		int nFil, nCol, e;
		
		cout << "Introduzca el numero de filas de la matriz" << endl;
		cin >> nFil;
		
		cout << "Introduzca el numero de columnas de la matriz" << endl;
		cin >> nCol;
		
		llenarMatriz(A, nFil, nCol);
		leerMatriz(A, nFil, nCol);
		
		cout << "Introduzca el elemento a localizar en la matriz: " << endl;
		cin >> e;
		
		buscarElemento(A, nFil, nCol, e);
		
		return 0;
	}