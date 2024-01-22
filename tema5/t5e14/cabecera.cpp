#include<iostream>
#include"cabecera.h"

#define MAX 100

using namespace std;

	void leerMatriz(struct matriz m1){
		for(int i = 0; i < m1.fil; i++){
			for(int j = 0; j < m1.col; j++){
				cout << m1.M[i][j];
			}
			cout << "\n";
		}
	}
	
	struct matriz llenarMatriz(struct matriz m1){
		struct matriz res;
		int cont = 0;
		for(int i = 0; i < m1.fil; i++){
			for(int j = 0; j < m1.col; j++){
				cont++;
				m1.M[i][j] = cont;
			}
		}
		res = m1;
		return res;
	}
	
	void sumatorioDiagonal(struct matriz m1){
		int suma = 0;
		int aux;
		if(m1.fil == m1.col){
			for(int d = 0; d < m1.col; d++){
				aux = m1.fil - (d+1);
				for(int k = 0; k <= aux; k++){
					if(k!=0){
						suma += m1.M[(d+k)][d];
					}
				}
			}
			
			cout << "La suma de los elementos por debajo de la diagonal es: " << suma << endl;
		}else{
			cout << "Matriz no cuadrada, carece de diagonal principal" << endl;
		}
	}