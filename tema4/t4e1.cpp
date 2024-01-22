#include<iostream>
#include<cmath>

using namespace std;

	int main(){
		int nElementos;
		double suma=0, media, varianza=0, max=-99999, min=99999;
		
		cout << "Introduzca el numero de elementos del vector" << endl;
		cin >> nElementos;
		
		double u[nElementos];
		
		for(int i = 0; i < nElementos; i++){
			cout << "Introduzca un valor para la posicion " << i << " del vector: " << endl;
			cin >> u[i];
		}
		
		cout << "Los elementos son: ";
		
		for(int i = 0; i < nElementos; i++){
			cout << u[i] << ", ";
			suma += u[i];
		}
		
		cout << "La suma de todos los elementos es " << suma << endl;
		
		media = suma/nElementos;
		
		cout << "La media es: " << media << endl;
		
		for(int i = 0; i < nElementos; i++){
			varianza += pow((u[i] - media),2);
			if(u[i]>=max){
				max = u[i];
			}
			if(u[i]<=min){
				min = u[i];
			}
		}
		
		varianza /= nElementos;
		
		cout << "La varianza es: " << varianza << endl;
		
		cout << "El numero maximo es " << max << " y el minimo es " << min;
		return 0;
	}