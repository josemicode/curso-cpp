#include <iostream>
#pragma once

using namespace std;

class Jugador
{
protected:
	string nombre;
	float vida;
	float ataque;

private:
	static float base_vida;
	static float base_ataque;

public:
	Jugador();
	Jugador(string nombre, float vida, float ataque);
	string getNombre();
	float getVida();
	float getAtaque();
	virtual void setVidaAtaque() = 0;
	virtual void activarPoder() = 0;
	virtual void recibirAtaque(float danho);
	virtual string toString();
};