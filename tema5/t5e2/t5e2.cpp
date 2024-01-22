#include<iostream>
#include "cabecera.h"

using namespace std;
	
	int main(){
		int a, b, c, fact;
		double comb;
		
		cout << "Introduzca un numero para calcular su factorial" << endl;
		cin >> a;
		
		fact = factorial(a);
		cout << "Factorial: " << fact << endl;
		
		cout << "Introduzca un numero para calcular su combinatorio" << endl;
		cin >> b;
		
		cout << "Introduce el segundo parametro" << endl;
		cin >> c;
		
		comb = combinatorio(b, c);
		cout << "Combinatorio : " << comb << endl;
	}