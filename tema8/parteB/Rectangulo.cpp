/*
José Miguel Ojeda Gutiérrez
Fecha: 3-18-2024
Docente: Manuel E. Gentive
Descripción: [Tarea de laboratorio - Tema POO]
Ejercicios realizados: 3/3
*/

#include"Rectangulo.h" 

using namespace std;

// Función para obtener el ancho del rectángulo
double Rectangulo::getAncho(){
    return ancho; // Retorna el valor del ancho del rectángulo
}

// Función para obtener el alto del rectángulo
float Rectangulo::getAlto(){
    return alto; // Retorna el valor del alto del rectángulo
}

// Función para establecer el ancho del rectángulo
void Rectangulo::setAncho(double nuevo_ancho){
    if(nuevo_ancho >= 0){
        ancho = nuevo_ancho; // Asigna el nuevo valor del ancho, asegurándose de que sea no negativo
    }
}

// Función para establecer el alto del rectángulo
void Rectangulo::setAlto(float nuevo_alto){
    if(nuevo_alto >= 0){
        alto = nuevo_alto; // Asigna el nuevo valor del alto, asegurándose de que sea no negativo
    }
}

// Función para cambiar tanto el alto como el ancho del rectángulo
void Rectangulo::cambiarAltoAncho(float nuevo_alto, double nuevo_ancho){
    if(nuevo_alto >= 0){
        alto = nuevo_alto; // Asigna el nuevo valor del alto, asegurándose de que sea no negativo
    }
    if(nuevo_ancho >= 0){
        ancho = nuevo_ancho; // Asigna el nuevo valor del ancho, asegurándose de que sea no negativo
    }
}

// Función que calcula el área en base al alto y ancho
float Rectangulo::calcularArea(){
	return (alto * ancho); // El área es el producto de las dimensiones del rectángulo
}

// Función que obtiene el perímetro a partir del alto y ancho
float Rectangulo::calcularPerimetro(){
	return (alto * 2 + ancho * 2); // El perímetro es las suma de todos los lados de un paralelogramo
}