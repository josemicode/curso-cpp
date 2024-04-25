/*
José Miguel Ojeda Gutiérrez
Fecha: 3-18-2024
Docente: Manuel E. Gentive
Descripción: [Tarea de laboratorio - Tema POO]
Ejercicios realizados: 3/3
*/

#include<iostream>
#include"Coche.h"
#include"Hora.h"

using namespace std;

int main(){
	
	// Instanciamos un objeto de la clase <<Coche>> y otro de la clase <<Hora>>
	Coche car;
	Hora time;
	
	// Inicializamos los valores base del coche
	car.arrancar();
	car.setVelocidadMaxima(50);
	
	// Inicializamos, además, la hora
	time.reiniciar(12, 59, 55);
	
	/* Este for se encarga de representar visualmente los cambios en la velocidad del coche a lo largo del tiempo.
	Se haceuso del contador para mostrar los pasos y de las funciones públicas de los objetos para mostrar y modificar 
	los valores de sus atributos */
	for(int i=0; i<5; i++){
		cout << "\n//---Paso " << i+1 << "---//" << endl;
		cout << "Velocidad actual del coche: " << car.obtenerVelocidad() << " m/s" << endl;
		time.mostrarHora();
		
		car.acelerar(4); // Incrementos de 4, pues esa es su aceleración (a = 4 m/s^2)
		time.sumarSegundos(1); // Sumamos los segundos de uno en uno para apreciar el cambio de forma progresiva
	}
	
	// Esta estructura es casi idéntica a la anterior, alternando la función acelerar() por frenar() y los intervalos del contador (para mostrar los pasos sucesivamente)
	for(int i=5; i<=15; i++){
		cout << "\n//---Paso " << i+1 << "---//" << endl;
		cout << "Velocidad actual del coche: " << car.obtenerVelocidad() << " m/s" << endl;
		time.mostrarHora();
		
		car.frenar(2); // decrementos de 2, pues esa es su deceleración (a = -2 m/s^2)
		time.sumarSegundos(1);
	}
}