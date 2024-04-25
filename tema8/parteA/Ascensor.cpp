/*
José Miguel Ojeda Gutiérrez
Fecha: 3-15-2024
Docente: Manuel E. Gentive
Descripción: [Tarea de laboratorio - Tema POO]
Ejercicios realizados: 4/4
*/
#include"Ascensor.h" 

using namespace std;

// Función para seleccionar una nueva planta en el ascensor
void Ascensor::seleccionarPlanta(int nuevaPlanta){
    // Verificamos si la puerta está cerrada antes de cambiar la planta actual
    if (!puertaAbierta) {
        plantaActual = nuevaPlanta; // Asignamos la nueva planta actual
    }
}

// Función para abrir la puerta del ascensor
void Ascensor::abrirPuerta(){
    puertaAbierta = true; // Establecemos el estado de la puerta como abierta
}

// Función para cerrar la puerta del ascensor
void Ascensor::cerrarPuerta(){
    puertaAbierta = false; // Establecemos el estado de la puerta como cerrada
}

// Función para obtener la planta actual del ascensor
int Ascensor::getPlantaActual(){
    return plantaActual; // Retorna la planta actual del ascensor
}

// Función para verificar si la puerta del ascensor está abierta
bool Ascensor::isPuertaAbierta(){
    return puertaAbierta; // Retorna true si la puerta está abierta, false si está cerrada
}