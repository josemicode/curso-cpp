#include<iostream>
#include<cmath>

using namespace std;

	int main(){
		//Variables
		float cateto1, cateto2, hipotenusa;
		
		//Lecturas
		cout << "Introduzca la longitud del primer cateto" << endl;
		cin >> cateto1;
		cin.ignore();
		
		cout << "Introduzca la longitud del segundo cateto" << endl;
		cin >> cateto2;
		cin.ignore();
		
		//Calculos
		hipotenusa = sqrt(pow(cateto1,2) + pow(cateto2,2));
		cout << "Hipotenusa: " << hipotenusa;
		
		//Fin de Ejecucion
		return 0;
	}