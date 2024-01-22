#include<iostream>

using namespace std;

	int main(){
		int param, aux;
		
		cout << "Introduzca un numero: " << endl;
		cin >> param;
		cin.ignore();
		
		aux = param;
		
		for(int i = 1; i < aux; i++){
			param *= i;
		}
		
		cout << "El factorial del numero introducido es: " << param;
	}