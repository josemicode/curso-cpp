#include<iostream>

using namespace std;

	int main(){
		//Variables
		double dineroTotal, sevillaCapital, sevillaTotal, dosHermanas, palmaRio, lucena, cordobaCapital, cordobaTotal, malagaTotal, malagaCapital, benalmadena;
		
		//Lecturas
		cout << "Introduzca un valor monetario: ";
		cin >> dineroTotal;
		cin.ignore();
		
		//Calculos
		sevillaTotal = (dineroTotal * 0.5);
		sevillaCapital = (sevillaTotal * 0.35);
		dosHermanas = (sevillaTotal * 0.65);
		
		cordobaTotal = (dineroTotal * 0.3);
		cordobaCapital = (cordobaTotal * 0.5);
		palmaRio = (cordobaTotal * 0.2);
		lucena = (cordobaTotal * 0.3);
		
		malagaTotal = (dineroTotal * 0.2);
		malagaCapital = (malagaTotal * 0.8);
		benalmadena = (malagaTotal * 0.2);
		
		cout << "Sevilla: " << sevillaTotal << " (Capital= " << sevillaCapital << ", Dos Hermanas= " << dosHermanas << ")" << endl;
		cout << "Cordoba: " << cordobaTotal << " (Capital= " << cordobaCapital << ", Palma del Rio= " << palmaRio << ", Lucena= " << lucena << ")" << endl;
		cout << "Malaga: " << malagaTotal << " (Capital= " << malagaCapital << ", Benalmadena= " << benalmadena << ")" << endl;
		
		//Fin de Ejecucion
		return 0;
	}