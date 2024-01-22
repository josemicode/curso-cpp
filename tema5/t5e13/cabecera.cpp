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
	
	void buscarElemento(int M[][MAX], int fil, int col, int ele){
		bool encontrado = false;
		
		for(int i = 0; i < fil; i++){
			for(int j = 0; j < col; j++){
				if(M[i][j]==ele){
					encontrado = true;
					cout << "Elemento encontrado en fila " << i << ", columna " << j << endl;
				}
			}
		}
		
		if(!encontrado){
			cout << "El elemento " << ele << " no se encuentra en la matriz" << endl;
		}
	}