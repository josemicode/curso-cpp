#include<iostream>
#include "cabecera.h"

using namespace std;

	int main(){
		int a, b;
		
		cout << "Introduce a: " << endl;
		cin >> a;
		
		cout << "Introduce b: " << endl;
		cin >> b;
		
		cout << "Los numeros perfectos entre a y b son: " << endl;
		
		for(int i = a; i <= b; i++){
			if(esPerfecto(i)){
				cout << "-->" << i << endl;
			}
		}
		
		return 0;
	}