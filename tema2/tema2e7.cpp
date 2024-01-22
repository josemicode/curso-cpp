#include<iostream>

using namespace std;

	int main(){
		//Variables
		string nombre, apellidos;
		int ano_nacimiento, edad;
		
		//Lecturas
		cout << "Dime tu nombre " << endl;
		getline(cin, nombre);
		
		cout << "Dime tus apellidos: " << endl;
		getline(cin, apellidos);
		
		cout << "Dime cuando naciste (ano): " << endl;
		cin >> ano_nacimiento;
		cin.ignore();
		
		//Calculos
		edad = 2023 - ano_nacimiento;
		cout << "Hola, " << nombre << " " << apellidos << ", tienes unos " << edad << " anos" << endl;
		
		//Fin de Ejecucion
		return 0;
	}