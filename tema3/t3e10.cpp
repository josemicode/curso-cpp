#include<iostream>

using namespace std;

	int main() {
		double precioInicial, precioFinal;
		
		cout << "Introduzca el precio inicial: " << endl;
		cin >> precioInicial;
		
		if(precioInicial < 10){
			precioFinal = precioInicial - precioInicial * 0.05;
		}else if((precioInicial >= 10)&&(precioInicial < 30)){
			precioFinal = precioInicial - precioInicial * 0.07;
		}else if((precioInicial >= 30)&&(precioInicial <= 50)){
			precioFinal = precioInicial - precioInicial * 0.08;
		}else{
			precioFinal = precioInicial - precioInicial * 0.1;
		}
		
		cout << "Precio final: " << precioFinal;
	}