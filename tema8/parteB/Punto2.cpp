/*
José Miguel Ojeda Gutiérrez
Fecha: 3-18-2024
Docente: Manuel E. Gentive
Descripción: [Tarea de laboratorio - Tema POO]
Ejercicios realizados: 3/3
*/

#include<iostream>
#include"Ascensor.h"

using namespace std;

int main(){
	// Hacemos una instancia de la clase <<Ascensor>> e inicializamos la planta
	Ascensor ascensor;
	ascensor.seleccionarPlanta(0);
	
	/* Esta estructura se trata de un bucle for [1->5] que contiene una estructura condicional de control
	cuyo  objetivo es darle al usuario una serie de opciones entre las que elegir para actuar de una forma u otra (switch). */
	for(int i=1; i<=5; i++){
		int eleccion;
		cout << "\nPaso " << i << endl;
		cout << "1. Seleccionar planta." << endl;
		cout << "2. Abre la puerta del ascensor." << endl;
		cout << "3. Verifica en que planta te encuentras y si la puerta esta abierta o cerrada" << endl;
		cout << "4. Cierra la puerta del ascensor" << endl;
		cin >> eleccion;
	
		switch(eleccion){
			case 1:
				int planta;
				cout << "Introduzca el numero de la planta: ";
				cin >> planta;
				// Solo se podrá seleccionar una planta válida entre 0 y 10
				if((planta>=0)&&(planta<=10)){
					ascensor.seleccionarPlanta(planta);					
				}
				break;
			case 2:
				// Aquí simplemente se settea puertaAbierta a verdadero
				ascensor.abrirPuerta();
				break;
			case 3:
				// Este caso te muestra la planta actual y el estado del atributo booleano que indica si la puerta está abierta o no
				cout << "Te encuentras en la planta " << ascensor.getPlantaActual() << "." << endl;
				if(ascensor.isPuertaAbierta()){
					cout << "La puerta esta abierta." << endl;
				}else{
					cout << "La puerta esta cerrada." << endl;
				}
				break;
			case 4:
				// Lo mismo que en el caso 2; esta vez a falso
				ascensor.cerrarPuerta();
				break;
			default:
				// Opción por defecto por si el usuario introdujese un valor erróneo como parámetro del switch
				cout << "Opcion incorrecta." << endl;
				break;
		}
	}
}