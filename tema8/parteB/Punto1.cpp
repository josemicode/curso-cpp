/*
José Miguel Ojeda Gutiérrez
Fecha: 3-18-2024
Docente: Manuel E. Gentive
Descripción: [Tarea de laboratorio - Tema POO]
Ejercicios realizados: 3/3
*/

#include<iostream>
#include"Rectangulo.h"

using namespace std;

int main(){
	// Creamos dos objetos instancias de la clase <<Rectangulo>>
	Rectangulo rectangulo1;
	Rectangulo rectangulo2;
	
	// Accedemos a sus atributos de dimensión alto y ancho mediante un método público "Setter", pues son privados
	rectangulo1.setAlto(5);
	rectangulo1.setAncho(10);
	rectangulo2.setAlto(3);
	rectangulo2.setAncho(7);
	
	// Pintamos por pantalla el área haciendo uso del método que devuelve el área de un rectángulo de lados conocidos
	cout << "Area del primer rectangulo: " << rectangulo1.calcularArea() << endl;
	cout << "Area del segundo rectangulo: " << rectangulo2.calcularArea() << endl;
	
	// Pintamos por pantalla el perímetro utilizando el método calcularPerimetro(), que actúa de forma similar a calcularArea()
	cout << "Perimetro del primer rectangulo: " << rectangulo1.calcularPerimetro() << endl;
	cout << "Perimetro del primer rectangulo: " << rectangulo2.calcularPerimetro() << endl;
}