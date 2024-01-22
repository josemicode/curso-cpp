#include<iostream>
#include "cabecera.h"

using namespace std;

	void invertirVector(int v[], int n){
		int der = (n-1);
		int izq = 0;
		int aux;
		while(der>=izq){
			aux = v[izq];
			v[izq] = v[der];
			v[der] = aux;
			izq++;
			der--;
		}
	}
	
	void leerVector(int v[], int n){
		cout << "(";
		for(int i = 0; i < n; i++){
			cout << v[i];
			if(i != n-1){
				cout << ", ";
			}else{
				cout << ")";
			}
		}
	}
	
	void inicializarVector(int v[], int n){
		for(int i = 0; i < n; i++){
			cout << "Introduzca un valor para la posicion " << i << " del vector: " << endl;
			cin >> v[i];
		}
	}