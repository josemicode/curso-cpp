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
	
	void llenarMatriz(int M[][MAX], int fil, int col){
		int cont = 0;
		for(int i = 0; i < fil; i++){
			for(int j = 0; j < col; j++){
				cont++;
				M[i][j] = cont;
			}
		}
	}
	
	void cambiarFilas(int M[][MAX], int fil, int col, int a, int b){
		int aux;
		for(int j = 0; j < col; j++){
			
			aux = M[a][j];
			M[a][j] = M[b][j];
			M[b][j] = aux;
			
		}
	}
	
	
	
	