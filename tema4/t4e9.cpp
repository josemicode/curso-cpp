#include<iostream>

using namespace std;

	int main(){
		int aux, suma=0, cont=1;
		
		struct matriz{
			int nFil, nCol;
			int M[100][100];
		};
		
		struct matriz m;
		
		cout << "Introduzca el numero de filas de la matriz: " << endl;
		cin >> m.nFil;
		
		cout << "Introduzca el numero de columnas de la matriz: " << endl;
		cin >> m.nCol;
		
		for(int i = 0; i < m.nFil; i++){
			for(int j = 0; j < m.nCol; j++){
				m.M[i][j] = cont;
				cont++;
			}
		}
		
		for(int i = 0; i < m.nFil; i++){ //Imprime matriz
			for(int j = 0; j < m.nCol; j++){
				cout << m.M[i][j] << " ";
			}
			cout << "\n";
		}
		
		if(m.nFil == m.nCol){
			for(int d = 0; d < m.nCol; d++){
				aux = m.nFil - (d+1);
				for(int k = 0; k <= aux; k++){
					if(k!=0){
						suma += m.M[(d+k)][d];
					}
				}
			}
			
			cout << "La suma de los elementos por debajo de la diagonal es: " << suma << endl;
		}else{
			cout << "Matriz no cuadrada, carece de diagonal principal" << endl;
		}
		
		return 0;
	}