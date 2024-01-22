#include<iostream>
#include<cmath>

using namespace std;

	int main(){
		//Variables
		double precio1, precio2, precio3, precio4, total, media, porcentaje1, porcentaje2, porcentaje3, porcentaje4;
		
		//Lecturas
		cout << "Introduce el precio 1: " << endl;
		cin >> precio1;
		cin.ignore();
		
		cout << "Introduce el precio 2: " << endl;
		cin >> precio2;
		cin.ignore();
		
		cout << "Introduce el precio 3: " << endl;
		cin >> precio3;
		cin.ignore();
		
		cout << "Introduce el precio 4: " << endl;
		cin >> precio4;
		cin.ignore();
		
		//Calculos
		total = precio1 + precio2 + precio3 + precio4;
		media = total / 4;
		porcentaje1 = precio1 * 100 / total;
		porcentaje2 = precio2 * 100 / total;
		porcentaje3 = precio3 * 100 / total;
		porcentaje4 = precio4 * 100 / total;
		
		cout << "Porcentaje que supone el primer precio: " << porcentaje1 << endl;
		cout << "Porcentaje que supone el segundo precio: " << porcentaje2 << endl;
		cout << "Porcentaje que supone el tercer precio: " << porcentaje3 << endl;
		cout << "Porcentaje que supone el cuarto precio: " << porcentaje4 << endl;
		
		cout << "Precio promedio: " << media;
		
		//Fin de Ejecucion
		return 0;
	}