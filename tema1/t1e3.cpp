#include <iostream>

using namespace std;

	int main (){
		string nombre;
		int edad;
		string mes;
		
		cout<< "Introduzca su edad: " << endl;
		cin >> edad;
		cout<< "Introduzca su nombre: " << endl;
		cin.ignore();
		getline(cin,nombre);
		cout<< "Introduzca su mes de nacimiento: " << endl;
		getline(cin,mes);
		
		cout << "Bienvenido, " << nombre << ", en el mes proximo de " << mes << " cumpliras " << edad +1 << endl;
		
		return 0;
	}