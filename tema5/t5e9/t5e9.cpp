#include<iostream>
#include "cabecera.h"

#define MAX 100

using namespace std;

	int main(){
		int u[MAX] = {0};
		int n;
		int eleccion;
		bool continuar = true;
		
		cout << "Introduzca la capacidad del vector: ";
		cin >> n;
		
		do{
			cout << "\nElige entre: \n1. Nuevo elemento \n2. Eliminar elemento \n3. Mostrar vector \n4. Contar los multiplos de 5 \n5. Finalizar" << endl;
			cin >> eleccion;
			switch(eleccion){
				case 1:
					nuevoElemento(u, n);
					break;
				case 2:
					borrarElemento(u, n);
					break;
				case 3:
					mostrarVector(u, n);
					break;
				case 4:
					contarMultiplos5(u, n);
					break;
				case 5:
					continuar = false;
					break;
			}
		}while(continuar);
		
		return 0;
	}