#include<iostream>

using namespace std;

	int main(){	//El programa imprime por pantalla cuatro caracteres expresados en el codigo de distintas formas. Juntos crean la palabra "HOLA"
		
		char caracter1, caracter2, caracter3, caracter4;

		caracter1=72;
		caracter2='O';
		caracter3=108-32;
		caracter4='a'-32;
		 
		cout << caracter1 << endl;
		cout << caracter2 << endl;
		cout << caracter3 << endl;
		cout << caracter4 << endl;

		return 0;
	}