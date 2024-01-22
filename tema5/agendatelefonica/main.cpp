#include<iostream>
#include "cabecera.h"

#define MAX 200

using namespace std;

	int main(){
		bool continuar = true;
		int eleccion, lim, numElementos = 0;
		registro agenda[MAX];
		
		do{
			cout << "Introduzca un limite de registros: ";
			cin >> lim;
		}while(lim>MAX);
		
		do{
			cout << "Elija entre las siguientes opciones: \n\n";
			cout << "1)--> Nuevo elemento" << endl;
			cout << "2)--> Eliminar elemento" << endl;
			cout << "3)--> Buscar elemento" << endl;
			cout << "4)--> Contar iniciales de apellidos" << endl;
			cout << "5)--> Mostrar todos los registros" << endl;
			cout << "6)--> Resetear agenda" << endl;
			cout << "7)--> Comprobar elementos con el mismo DNI" << endl;
			cout << "8)--> Longitud media de todos los nombres" << endl;
			cout << "9)--> Salir del menu" << endl;
			
			cin >> eleccion;
			
			switch(eleccion){
				case 1:
					if(numElementos<=lim){
						nuevoElemento(agenda, numElementos);
						numElementos++;
					}
					break;
				case 5:
					mostrarAgenda(agenda, numElementos);
					break;
				case 9:
					continuar = false;
					break;
				default:
					cout << "Opcion no disponible" << endl;
					break;
			}
		}while(continuar);
		
		return 0;
	}