#include "Ascensor.h"

// Funciones públicas
void Ascensor::seleccionarPlanta(int nuevaPlanta) {
    plantaActual = nuevaPlanta;
}

void Ascensor::abrirPuerta() {
    puertaAbierta = true;
}

void Ascensor::cerrarPuerta() {
    puertaAbierta = false;
}

int Ascensor::getPlantaActual() {
    return plantaActual;
}

bool Ascensor::isPuertaAbierta() {
    return puertaAbierta;
}