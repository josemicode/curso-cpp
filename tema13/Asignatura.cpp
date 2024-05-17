#include "Asignatura.h"

Asignatura::Asignatura()
{
    this->nombre = "Unnamed";
    this->cuatrimestre = 0;
    this->dificultad_esperada = 0.0;
}

Asignatura::Asignatura(string nombre, int cuatrimestre, float dificultad_esperada)
{
    this->nombre = nombre;
    this->cuatrimestre = cuatrimestre;
    this->dificultad_esperada = dificultad_esperada;
}

string Asignatura::getNombre()
{
    return this->nombre;
}

int Asignatura::getCuatrimestre()
{
    return this->cuatrimestre;
}

float Asignatura::getDificultadEsperada()
{
    return this->dificultad_esperada;
}

void Asignatura::setNombre(string _nombre)
{
    nombre = _nombre;
}

void Asignatura::setCuatrimeestre(int _cuatrimestre)
{
    cuatrimestre = _cuatrimestre;
}

void Asignatura::setDificultadEsperada(float _dificultad_esperada)
{
    dificultad_esperada = _dificultad_esperada;
}

bool Asignatura::operator<(const Asignatura& otro)
{
    return (this->cuatrimestre < otro.cuatrimestre);
}

bool Asignatura::operator==(const Asignatura& otro)
{
    return ((this->nombre == otro.nombre) && (this->cuatrimestre == otro.cuatrimestre) && (this->dificultad_esperada == otro.dificultad_esperada));
}


