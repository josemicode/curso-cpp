/*
José Miguel Ojeda Gutiérrez
Fecha: 3-15-2024
Docente: Manuel E. Gentive
Descripción: [Tarea de laboratorio - Tema POO]
Ejercicios realizados: 4/4
*/
#include"Hora.h" 

using namespace std;

// Función para obtener la hora almacenada en el objeto
int Hora::getHora(){
    return hora; // Retorna el valor de la hora
}

// Función para obtener los minutos almacenados en el objeto
int Hora::getMinuto(){
    return minuto; // Retorna el valor de los minutos
}

// Función para obtener los segundos almacenados en el objeto
int Hora::getSegundo(){
    return segundo; // Retorna el valor de los segundos
}

// Función para mostrar el tiempo en formato "hora - minuto - segundo"
void Hora::mostrarHora(){
    cout << hora << "h " << minuto << "m " << segundo << "s " << endl; // Imprime la hora en formato "hora:minuto:segundo"
}

// Función para reiniciar los valores de hora, minuto y segundo
void Hora::reiniciar(int h, int m, int s){
    // Verificamos que los valores proporcionados sean válidos (mayores o iguales a cero)
    if(h >= 0){
        hora = h; // Si es válido, asignamos la hora
    }
    
    if(m >= 0){
        minuto = m; // Si es válido, asignamos los minutos
    }
    
    if(s >= 0){
        segundo = s; // Si es válido, asignamos los segundos
    }
}

// Función para sumar segundos al objeto Hora
void Hora::sumarSegundos(int segundos){
    segundo += segundos; // Añadimos los segundos al valor actual de segundos
    
    // Si los segundos exceden 60, ajustamos los minutos y los segundos
    minuto += (segundo / 60);
    segundo %= 60;
    
    // Si los minutos exceden 60, ajustamos las horas y los minutos
    hora += (minuto / 60);
    minuto %= 60;
}