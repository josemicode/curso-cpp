#include<iostream>
#include "cabecera.h"

using namespace std;

	int main(){
		int a, b, n;
		
		/*
		cout << "Introduzca un numero: " << endl;
		cin >> a;
		
		cout << "Ahora su exponente: " << endl;
		cin >> b;
		
		cout << potencia(a, b);*/
		
		cout << "Cuantas potencias quieres calcular? " << endl;
		cin >> n;
		
		for(int i = 0; i < n; i++){
			cout << "Introduzca un numero: " << endl;
			cin >> a;
		
			cout << "Ahora su exponente: " << endl;
			cin >> b;
		
			cout << "--> " << potencia(a, b) << endl;
		}
	}