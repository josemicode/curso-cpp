#include<iostream>

#define MAX 100

using namespace std;

	int main(){
		int M[MAX][MAX];
		double v[MAX];
		int nFil, nCol, cont=0;
		double media=0;
		
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
		
		for(int j = 0; j < nCol; j++){ //Calcula las medias
			for(int i = 0; i < nFil; i++){
				media += M[i][j];
			}
			media /= (double) nFil;
			v[j] = media;
			media = 0;
		}
		
		cout << "\n[ "; //Muestra el vector
		for(int j = 0; j < nCol; j++){
			cout << v[j] << " ";
		}
		cout << "]";
	}