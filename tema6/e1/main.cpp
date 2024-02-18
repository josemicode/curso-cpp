#include<iostream>
#include"header.h"

using namespace std;

int main(){
	float flotante;
	
	cout << "Introduzca un angulo en grados: " << endl;
	cin >> flotante;
	
	ejercicio1(flotante);
	
	cout << flotante << " radianes";
}