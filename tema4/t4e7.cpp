#include<iostream>

#define MAX 100

using namespace std;

	int main(){
		int M[MAX][MAX];
		int nFil, nCol, fila, rotaciones, cont=0, aux=0;
		
		cout << "Introduzca el numero de filas de la matriz: " << endl;
		cin >> nFil;
		
		cout << "Introduzca el numero de columnas de la matriz: " << endl;
		cin >> nCol;
		
		for(int i = 0; i < nFil; i++){ //Rellena matriz de secuencia numerica
			for(int j = 0; j < nCol; j++){
				M[i][j] = cont;
				cont++;
			}
		}
		
		for(int i = 0; i < nFil; i++){ //Imprime matriz
			for(int j = 0; j < nCol; j++){
				cout << M[i][j] << " ";
			}
			cout << "\n";
		}
		
		cout << "Indica el indice de la fila sobre la que quieres operar: " << endl;
		cin >> fila;
		
		cout << "Indica el numero de rotaciones hacia el eje positivo de las columnas de dicha fila: " << endl;
		cin >> rotaciones;
		
		for(int k = 0; k < rotaciones; k++){
			for(int j = (nCol-1); j >= 0; j--){
				if(j==(nCol-1)){
					aux = M[fila][j];
					M[fila][j] = M[fila][(j-1)];
				}else if(j==0){
					M[fila][j] = aux;
				}else{
					M[fila][j] = M[fila][(j-1)];
				}
			}
		}
		
		for(int i = 0; i < nFil; i++){ //Imprime matriz
			for(int j = 0; j < nCol; j++){
				cout << M[i][j] << " ";
			}
			cout << "\n";
		}
	}