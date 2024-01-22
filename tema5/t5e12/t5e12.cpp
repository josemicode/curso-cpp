#include<iostream>
#include"cabecera.h"

#define MAX 100

using namespace std;

	int main(){
		int A[MAX][MAX];
		int nFil, nCol, fila, rotaciones;
		
		
		cout << "Introduzca el numero de filas de la matriz: " << endl;
		cin >> nFil;
		
		cout << "Introduzca el numero de columnas de la matriz: " << endl;
		cin >> nCol;
		
		llenarMatriz(A, nFil, nCol);
		leerMatriz(A, nFil, nCol);
		
		cout << "Indica el indice de la fila sobre la que quieres operar: " << endl;
		cin >> fila;
		
		cout << "Indica el numero de rotaciones hacia el eje positivo de las columnas de dicha fila: " << endl;
		cin >> rotaciones;

		rotarMatriz(A, nFil, nCol, fila, rotaciones);
		leerMatriz(A, nFil, nCol);

		return 0;
	}
