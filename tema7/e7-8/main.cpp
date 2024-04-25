#include<iostream>
#include"lab2.h"

using namespace std;

int main(){
	bool choice = true;
	int num, anew;
	
	if(ingresarAlClub(8)){
		cout << "a";
	}if(ingresarAlClub(21)){
		cout << "b";
	}if(ingresarAlClub(22)){
		cout << "c";
	}if(ingresarAlClub(100)){
		cout << "d";
	}if(ingresarAlClub(99)){
		cout << "e";
	}if(ingresarAlClub(3)){
		cout << "f";
	}if(ingresarAlClub(211)){
		cout << "g" << endl;
	}
	
	do{
		cout << "Enter a: " << endl;
		cin >> anew;
		cout << "Enter n: " << endl;
		cin >> num;
		
		if(num==-1){
			choice = false;
		}else if(juegoAdivinar(anew, num)){
			cout << "Acertaste" << endl;
		}
	}while(choice);
}