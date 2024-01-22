#include<iostream>
#include "cabecera.h"

#define MAX 100

using namespace std;

	int main(){
		int u[MAX];
		int l;
		
		cout << "Introduce el numero de elementos: " << endl;
		cin >> l;
		inicializarVector(u, l);
		leerVector(u, l);
		cout << "\nA continuacion el inverso: \n" << endl;
		invertirVector(u, l);
		leerVector(u, l);
		
		return 0;
	}