#include<iostream>
#include<cmath>

using namespace std;

	int main(){
		//Variables
		double n, formula;
		
		//Lecturas
		cout << "Introduzca un valor para \'n\'";
		cin >> n;
		cin.ignore();
		
		//Calculos
		formula = (abs(pow(n, 3)) * log(pow(n, 2)))/(sqrt(pow(n, 3)));
		
		cout << formula;
		
		//Fin de Ejecucion
		return 0;
	}