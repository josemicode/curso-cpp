#include<iostream>
#include<cmath>
#include "cabecera.h"

using namespace std;

	void inicializarVector(int v[], int n){
		for(int i = 0; i < n; i++){
			cout << "Introduzca un valor para la posicion " << i << " del vector: " << endl;
			cin >> v[i];
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
	
	double mediaVector(int v[], int n){
		double res;
		int suma = sumatorioVector(v, n);
		res = (double) suma/n;
		return res;
	}
	
	int sumatorioVector(int v[], int n){
		int res = 0;
		for(int i = 0; i < n; i++){
			res+=v[i];
		}
		return res;
	}
	
	double varianzaVector(int v[], int n){
		double res = 0;
		for(int i = 0; i < n; i++){
			res += pow((v[i] - mediaVector(v, n)),2);
		}
		res /= n;
		return res;
	}
	
	int minVector(int v[], int n){
		int res = 9999;
		for(int i = 0; i < n; i++){
			if(v[i] < res){
				res = v[i];
			}
		}
		return res;
	}
	
	int maxVector(int v[], int n){
		int res = -9999;
		for(int i = 0; i < n; i++){
			if(v[i] > res){
				res = v[i];
			}
		}
		return res;
	}
	
	