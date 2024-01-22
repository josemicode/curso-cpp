#include<iostream>

#define MAX 100

using namespace std;

	int main(){
		int M[MAX][MAX];
		int nFil, nCol, cont=1, e;
		bool encontrado = false;
		
		cout << "Introduzca el numero de filas de la matriz" << endl;
		cin >> nFil;
		
		cout << "Introduzca el numero de columnas de la matriz" << endl;
		cin >> nCol;
		
		for(int i = 0; i < nFil; i++){
			for(int j = 0; j < nCol; j++){
				M[i][j] = cont;
				cont++;
			}
		}
		
		cout << "Introduzca el elemento a localizar en la matriz: " << endl;
		cin >> e;
		
		for(int i = 0; i < nFil; i++){
			for(int j = 0; j < nCol; j++){
				if(M[i][j]==e){
					encontrado = true;
					cout << "Elemento encontrado en fila " << i << ", columna " << j << endl;
				}
			}
		}
		
		if(!encontrado){
			cout << "El elemento " << e << " no se encuentra en la matriz" << endl;
		}
	}