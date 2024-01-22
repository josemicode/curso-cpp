#include<iostream>

#define T 1024;

using namespace std;

	int main(){
		//Variables
		long num;
		long res;
		
		//Lecturas
		cout << "Introduzca un numero: ";
		cin >> num;
		
		//Calculos
		cout << num << endl;
		num /= T;
		cout << num << endl;
		num /= T;
		cout << num << endl;
		
		//Fin de Ejecucion
		return 0;
	}