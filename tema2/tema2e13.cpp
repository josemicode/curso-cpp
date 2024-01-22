#include<iostream>

#include<cctype>

using namespace std;

	int main(){
		//Variables
		string nombre, usuario;
		char letra, letraMay;
		int numero;
		
		//Lecturas
		cout << "Dime tu nombre: " << endl;
		getline(cin, nombre);
		
		cout << "En que dia naciste" << endl;
		cin >> numero;
		cin.ignore();
		
		cout << "Dime una letra cualquiera" << endl;
		cin >> letra;
		cin.ignore();
		
		//Calculos
		//usuario = toupper(letra) + tolower(letra) + "_" + nombre + "_" + tolower(letra) + toupper(letra) + to_string(numero);
		letraMay= toupper(letra);
		letra = tolower(letra);
		
		cout << "Aqui tienes tu nombre de usuario para el counter: " << letraMay << letra << "_" << nombre << "_" << letra << letraMay << to_string(numero);
		
		//Fin de Ejecucion
		return 0;
	} 