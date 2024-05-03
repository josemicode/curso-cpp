#include "Vector2D.h"

// Constructor predeterminado que inicializa las coordenadas del vector a (0,0)
Vector2D::Vector2D(){
    this->x = 0;
    this->y = 0;
}

// Constructor que permite especificar las coordenadas del vector al crear un objeto Vector2D
Vector2D::Vector2D(float x, float y){
    this->x = x;
    this->y = y;
}

// Sobrecarga del operador de asignación para asignar las coordenadas de un vector a otro
Vector2D& Vector2D::operator=(const Vector2D& otro)
{
    this->x = otro.x;
    this->y = otro.y;
}

// Sobrecarga del operador de suma para sumar dos vectores y devolver un nuevo Vector2D resultante
Vector2D Vector2D::operator+(const Vector2D& other){
    return Vector2D(x + other.x, y + other.y);
}

// Sobrecarga del operador de división para dividir las coordenadas del vector por un escalar y devolver un nuevo Vector2D
Vector2D Vector2D::operator/(const float& total){
    return Vector2D(x / total, y / total);
}

// Sobrecarga del operador de multiplicación para multiplicar las coordenadas del vector por un escalar y devolver un nuevo Vector2D
Vector2D Vector2D::operator*(const float& a){
    return Vector2D(x * a, y * a);
}

// Método para obtener una representación en cadena del vector en formato "(x i, y j)"
string Vector2D::toString(){
    return ("( " + to_string(this->x) + "i, " + to_string(this->y) + "j )");
}

