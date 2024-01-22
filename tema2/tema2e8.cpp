#include<iostream>

using namespace std;

	int main(){
		//Variables
		int horas1, minutos1, segundos1, horas2, minutos2, segundos2, horas3, minutos3, segundos3;
		
		//Lecturas
		cout << "Introduce la hora inicial" << endl;
		cin >> horas1;
		cin.ignore();
		cout << "Introduce el minuto inicial" << endl;
		cin >> minutos1;
		cin.ignore();
		cout << "Introduce el segundo inicial" << endl;
		cin >> segundos1;
		cin.ignore();
		
		cout << "Introduce la hora final" << endl;
		cin >> horas2;
		cin.ignore();
		cout << "Introduce el minuto final" << endl;
		cin >> minutos2;
		cin.ignore();
		cout << "Introduce el segundo final" << endl;
		cin >> segundos2;
		cin.ignore();
		
		//Calculos
		segundos1 += horas1*3600 + minutos1*60;
		segundos2 += horas2*3600 + minutos2*60;
		
		segundos3 = abs(segundos2 - segundos1);
		minutos3 = segundos3/60;
		segundos3 %= 60;
		horas3 = minutos3/60;
		minutos3 %= 60;
		
		cout << "La hora resultante como diferencia es " << horas3 << "h " << minutos3 << "m " << segundos3 << "s";
		
		//Fin de Ejecucion
		return 0;
	}