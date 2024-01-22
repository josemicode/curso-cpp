#include<iostream>

using namespace std;

	int main(){
		int nElementos;
		double aux = 0;
		
		cout << "Introduzca el numero de elementos del vector" << endl;
		cin >> nElementos;
		
		double u[nElementos];
		
		for(int i = 0; i < nElementos; i++){
			cout << "Introduzca un valor para la posicion " << i << " del vector: " << endl;
			cin >> u[i];
		}
		
		int cont = 0;
		for(int i = nElementos - 1; i >= 0; i--){
			/*aux = u[i];
			
			u[cont] = aux;
			
			cont++;*/
			
			if(cont<=i){
				aux = u[i];
				u[i] = u[cont];
				u[cont] = aux;
				cont++;
			}
		}
		
		cout << "Los elementos inversos son: ";
		
		for(int i = 0; i < nElementos; i++){
			cout << u[i] << ", ";
		}
	}