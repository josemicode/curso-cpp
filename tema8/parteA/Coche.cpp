/*
José Miguel Ojeda Gutiérrez
Fecha: 3-15-2024
Docente: Manuel E. Gentive
Descripción: [Tarea de laboratorio - Tema POO]
Ejercicios realizados: 4/4
*/
#include <iostream>
#include "Coche.h"

// Función para establecer el color del coche
void Coche::setColor(std::string& nuevoColor){
    color = nuevoColor; // Asigna el nuevo color al atributo 'color' del coche
}

// Función para establecer el tipo de motor del coche
void Coche::setMotor(std::string& nuevoMotor){
    motor = nuevoMotor; // Asigna el nuevo tipo de motor al atributo 'motor' del coche
}

// Función para establecer la velocidad máxima del coche
void Coche::setVelocidadMaxima(double nuevaVelocidadMaxima){
    if(nuevaVelocidadMaxima >= 0){
        velocidadMaxima = nuevaVelocidadMaxima; // Asigna la nueva velocidad máxima al coche, asegurándose de que sea no negativa
    }
}

// Función para encender el coche
void Coche::arrancar(){
    encendido = true; // Establece el estado del coche como encendido
}

// Función para apagar el coche si la velocidad es cero
void Coche::apagar(){
    if(velocidad == 0){
        encendido = false; // Apaga el coche si su velocidad es cero
    }
}

// Función para disminuir la velocidad del coche
void Coche::frenar(double decremento){
    if((decremento >= 0) && (decremento <= velocidad)){
        velocidad -= decremento; // Reduce la velocidad del coche, asegurándose de que el decremento sea válido y no exceda la velocidad actual
    }
}

// Función para aumentar la velocidad del coche
void Coche::acelerar(double incremento){
    if(encendido){ // Verifica si el coche está encendido
        if((incremento >= 0) && ((incremento + velocidad) <= velocidadMaxima)){
            velocidad += incremento; // Aumenta la velocidad del coche, asegurándose de que el incremento sea válido y no exceda la velocidad máxima
        }
    }
}

// Función para verificar si el coche está encendido
bool Coche::isEncendido(){
    return encendido; // Retorna el estado del coche (encendido o apagado)
}

// Función para obtener la velocidad actual del coche
double Coche::obtenerVelocidad(){
    return velocidad; // Retorna la velocidad actual del coche
}