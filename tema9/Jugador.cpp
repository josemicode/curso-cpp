#include <iostream>
#include "Jugador.h"

using namespace std;

float Jugador::base_vida = 100;
float Jugador::base_ataque = 25;

Jugador::Jugador() {}

Jugador::Jugador(string nombre, float vida, float ataque)
{
	this->nombre = nombre;
	this->vida = vida;
	this->ataque = ataque;
}

string Jugador::getNombre()
{
	return this->nombre;
}

float Jugador::getVida()
{
	return this->vida;
}

float Jugador::getAtaque()
{
	return this->ataque;
}

void Jugador::recibirAtaque(float danho)
{
	this->vida -= danho;
}

string Jugador::toString()
{
	string res;
	res = ("El jugador " + nombre + " tiene " + to_string(vida) + " puntos de vida y " + to_string(ataque) + " puntos de ataque.\n");
	return res;
}

//	return ("El jugador " << this->nombre << " tiene " << this->vida << " puntos de vida y " << this->ataque << " puntos de ataque." << endl);

/*int main(){
	//Jugador j1 = Jugador();
	float vida=99, ataque=15;
	string nombre = "aa";
	string res = ("El jugador " + nombre + " tiene " + to_string(vida) + " puntos de vida y " + to_string(ataque) + " puntos de ataque.\n");

	cout << res;
	return 0;
}//*/