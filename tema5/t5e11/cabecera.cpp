#include<iostream>
#include"cabecera.h"

#define MAX 100

using namespace std;

	void leerMatriz(int M[][MAX], int fil, int col){
		for(int i = 0; i < fil; i++){
			for(int j = 0; j < col; j++){
				cout << M[i][j];
			}
			cout << "\n";
		}
	}
	
	void leerVector(double v[], int n){
		for(int i = 0; i < n; i++){
			cout << v[i];
		}
	}
	
	void llenarMatriz(int M[][MAX], int fil, int col){
		int cont = 0;
		for(int i = 0; i < fil; i++){
			for(int j = 0; j < col; j++){
				cont++;
				M[i][j] = cont;
			}
		}
	}
	
	void mediaColumnas(int M[][MAX], int fil, int col, double v[]){
		int aux = 0;
		for(int j = 0; j < col; j++){
			for(int i = 0; i < fil; i++){
				aux += M[i][j];
			}
			v[j] = (double) aux/fil;
			aux = 0;
		}
	}