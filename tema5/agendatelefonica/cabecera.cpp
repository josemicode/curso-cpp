#include<iostream>
#include "cabecera.h"

#define MAX 200

using namespace std;

	void nuevoElemento(registro agenda[], int n){
		cout << "Introduzca... " << endl;
		
		cout << "DNI: ";
		cin >> agenda[n].DNI;
		
		cout << "Apellidos: ";
		cin >> agenda[n].Apellidos;
		
		cout << "Nombre: ";
		cin >> agenda[n].Nombre;
		
		cout << "Telefono: ";
		cin >> agenda[n].Telefono;
	}
	
	void mostrarAgenda(registro agenda[], int n){
		for(int i = 0; i<n; i++){
			cout << agenda[i].DNI << endl;
			cout << agenda[i].Apellidos << endl;
			cout << agenda[i].Nombre << endl;
			cout << agenda[i].Telefono << endl;
		}
	}