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
		
		if((mes==4) || (mes==6) || (mes==9) || (mes==11)){
			cout << "El mes tiene 30 dias";
		}else if(mes==2){
			if(bisiesto){
				cout << "El mes tiene 29 dias";
			}else{
				cout << "El mes tiene 28 dias";
			}
		}else{
			cout << "El mes tiene 31 dias";
		}
		return 0;
	}