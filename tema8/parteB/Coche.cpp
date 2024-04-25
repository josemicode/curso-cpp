#include "Coche.h"

// Funciones públicas
void Coche::setColor(std::string& nuevoColor) {
    color = nuevoColor;
}

void Coche::setMotor(std::string& nuevoMotor) {
    motor = nuevoMotor;
}

void Coche::setVelocidadMaxima(double nuevaVelocidadMaxima) {
    velocidadMaxima = nuevaVelocidadMaxima;
}

void Coche::arrancar() {
    if (!encendido) {
        encendido = true;
        velocidad = 0.0;
    }
}

void Coche::apagar() {
    if (!encendido) {
        encendido = false;
        velocidad = 0.0;
    }
}

void Coche::frenar(double decremento) {
    if (encendido && velocidad > 0.0) {
        velocidad -= decremento;
            if(velocidad<0.0){
                velocidad=0.0;
            }
    }
}

void Coche::acelerar(double incremento) {
    if (encendido && velocidad + incremento <= velocidadMaxima) {
        velocidad += incremento;
    }
}

bool Coche::isEncendido(){
    return encendido;
}

double Coche::obtenerVelocidad(){
    return velocidad;
}