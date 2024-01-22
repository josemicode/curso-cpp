#include<iostream>
#include "cabecera.h"

using namespace std;

	void nuevoElemento(int * v, int n){
		bool lleno = true;
		for(int i = 0; i<n; i++){
			if(lleno){
				if(v[i]==0){
					lleno = false;
					cout << "Introduzca un elemento: " << endl;
					cin >> v[i];
				}
			}
		}
		if(lleno){
			cout << "El vector esta completo" << endl;
		}
	}
	
	void borrarElemento(int * v, int n){
		int posAx;
		cout << "Introduce la posicion a eliminar: " << endl;
		cin >> posAx;
		
		if((posAx<n)&&(v[posAx]!=0)){
			for(int i = posAx; i<n; i++){
				v[i] = v[i+1];
			}
			v[n-1]=0;
			
			cout << "Elemento borrado";
		}else{
			cout << "No se ha podido borrar el elemento" << endl;
		}
	}
	
	void mostrarVector(int * v, int n){
		cout << "\nVector: [ ";
		for(int i = 0; i<n; i++){
			cout << v[i] << " ";
		}
		cout << "]" << endl;
	}
	
	void contarMultiplos5(int * v, int n){
		int divisores = 0;
		for(int i = 0; i<n; i++){
			if((v[i]!=0)&&((v[i]%5)==0)){
				divisores++;
			}
		}
		cout << "El numero de multiplos de 5 contenidos actualmente en el vector es: " << divisores << endl;
	}