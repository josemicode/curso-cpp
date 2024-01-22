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
	
	void rotarMatriz(int M[][MAX], int fil, int col, int n, int r){
		int aux;
		for(int k = 0; k < r; k++){
			for(int j = (col-1); j >= 0; j--){
				if(j==(col-1)){
					aux = M[n][j];
					M[n][j] = M[n][(j-1)];
				}else if(j==0){
					M[n][j] = aux;
				}else{
					M[n][j] = M[n][(j-1)];
				}
			}
		}
	}