#include<iostream>
#include<cmath>

#define PI 3.14

using namespace std;

	int main() {
		double radio, res;
		int opcion;
		
		cout << "Introduce el radio: " << endl;
		cin >> radio;
		cin.ignore();
		
		cout << "Que quieres hacer: (longitud de circunferencia = 1, area de circunferencia = 2, area de esfera = 3, volumen de esfera = 4)";
		cin >> opcion;
		cin.ignore();
		
		switch(opcion){
			case 1:
				res = 2*radio*PI;
				break;
			
			case 2:
				res = (pow(radio,2))*PI;
				break;
			
			case 3:
				res = 4*PI*(pow(radio,2));
				break;
			
			case 4:
				res = (4/3)*PI*(pow(radio,3));
				break;
				
			default:
				cout << "Mal";
		}
		
		cout << res;
	}