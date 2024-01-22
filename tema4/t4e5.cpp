#include<iostream>

#define MAX 100

using namespace std;

	int main(){
		int M[MAX][MAX];
		int nFil, nCol, a, b, cont=0, aux;
		
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
		
		cout << "Indica el indice de la fila a: " << endl;
		cin >> a;
		
		cout << "Indica el indice de la fila b: " << endl;
		cin >> b;
		
		for(int j = 0; j < nCol; j++){ //Swapea filas
			aux = M[a][j];
			M[a][j] = M[b][j];
			M[b][j] = aux;
		}
		
		for(int i = 0; i < nFil; i++){ //Imprime matriz
			for(int j = 0; j < nCol; j++){
				cout << M[i][j] << " ";
			}
			cout << "\n";
		}
	}