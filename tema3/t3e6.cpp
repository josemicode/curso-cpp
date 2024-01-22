#include<iostream>

using namespace std;

	int main() {
		int mes;
		char decision;
		bool bisiesto = false;
		
		cout << "Introduzca un mes: " << endl;
		cin >> mes;
		cin.ignore();
		
		cout << "Es bisiesto el ano? [y/n]: " << endl;
		cin >> decision;
		cin.ignore();
		
		if(decision=='y'){
			bisiesto = true;
		}
		
		switch(mes){	//31: Enero, Marzo, Mayo, Julio, Agosto, Octubre, Diciembre. 30: Abril, Junio, Septiembre, Noviembre.
			case 4: case 6: case 9: case 11:
				cout << "El mes tiene 30 dias";
				break;
			case 2:
				if(bisiesto){
					cout << "El mes tiene 29 dias";
				}else{
					cout << "El mes tiene 28 dias";
				}
				break;
			default:
				cout << "El mes tiene 31 dias";
		}
	}