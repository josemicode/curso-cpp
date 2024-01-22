#include<iostream>
#include<cmath>
#include "cabecera.h"

#define MAX 100

using namespace std;

	void inicializarPolinomio(int * pol, int grado){
		for(int i = 0; i<=grado; i++){
			cout << "--> ";
			cin >> pol[i];
		}
	}
	
	void leerPolinomio(int * pol, int grado){
		for(int i = grado; i>=0; i--){
			cout << pol[i] << "x^" << i;
			if(i!=0){
				cout << " + ";
			}
		}
	}
	
	int evaluarPolinomio(int * pol, int grado, int punto){
		int res = 0;
		for(int i = 0; i<=grado; i++){
			res += (pol[i]*(pow(punto, i)));
		}
		return res;
	}
	