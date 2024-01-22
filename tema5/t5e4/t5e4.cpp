#include<iostream>
#include "cabecera.h"

using namespace std;

	int main(){
		int a, b;
		
		cout << "Introduce a: " << endl;
		cin >> a;
		cout << "Introduce b: " << endl;
		cin >> b;
		
		cout << "Los primos entre a y b son: " << endl;
		
		for(int i = a; i <= b; i++){
			//cout << i << endl;
			if(esPrimo(i)){
				cout << "-->" << i << endl;
			}
		}
		
		return 0;
	}