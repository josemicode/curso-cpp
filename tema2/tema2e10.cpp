#include<iostream>

#define IMPUESTOS (0.15)
#define SEGURO (0.045)

using namespace std;

	int main(){
		//Variables
		int sueldoBruto, anos;
		double salarioNeto;
		
		//Lecturas
		cout << "Introduzca un sueldo bruto: " << endl;
		cin >> sueldoBruto;
		cin.ignore();
		
		cout << "Introduzca el numero de anos en tu empresa: " << endl;
		cin >> anos;
		cin.ignore();
		
		//Calculos
		salarioNeto = sueldoBruto - (sueldoBruto * IMPUESTOS * SEGURO) + (anos/3)*45 + (anos%3)*5;
		
		cout << "El salario neto es: " << salarioNeto;
		
		//Fin de Ejecucion
		return 0;
	}