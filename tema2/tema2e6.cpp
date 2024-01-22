#include<iostream>

using namespace std;

	int main(){
		//Variables
		const long kg = 23600000;
		long semanas;
		long res;
		
		//Lecturas
		cout << "Introduzca un numero de semanas: " << endl;
		cin >> semanas;
		
		//Calculos
		res = semanas * kg;
		cout << res;
		
		//Fin de Ejecucion
		return 0;
	}