#include<iostream>
#include<stdlib.h>
#include<time.h>
#include"Mazo.h"

using namespace std;

int Mazo::llenarMazo(){
	carta_superior = &cartas[0];
	char simbolos[4] = {'o', 'c', 'e', 'b'};
	
	for(int i = 0; i<4; i++){
		for(int j = 0; j<12; j++){
			(*(carta_superior + i*12 + j)).valor = j+1;
			//cout << (*(carta_superior + i*j)).valor << " ";
			(*(carta_superior + i*12 + j)).cara = simbolos[i];
			//cout << (*(carta_superior + i*j)).cara << " ";
		}
	}
	
	/*for(int i = 0; i<48; i++){
		cout << cartas[i].valor << " " << cartas[i].cara;
	}*/
}

Carta Mazo::getCarta(int numero){
	Carta copia;
	
	copia.valor = (*(carta_superior+numero-1)).valor;
	copia.cara = (*(carta_superior+numero-1)).cara;
	
	return copia;
}

Carta* Mazo::robarCarta(){
	Carta *res = carta_superior;
	carta_superior++;
	//cout << carta_superior;
	return res;
}

void Mazo::mezclarMazo(){
	Carta aux;
	
	srand(time(NULL));
	int *rd = new int;
	
	for(int i = 0; i < 48; i++){
		*rd = rand()%48;
		aux = *(carta_superior + i);
		*(carta_superior + i) = *(carta_superior + *rd);
		*(carta_superior + *rd) = aux;
	}
	
	delete rd;
}

int main(){
	Mazo mimazo;
	Carta nueva_carta;
	int eleccion;
	Carta *carta_robada;
	
	mimazo.llenarMazo();
	//mimazo.mezclarMazo();
	
	cout << "Selecciona carta" << endl;
	cin >> eleccion;
	nueva_carta = mimazo.getCarta(eleccion);
	cout << nueva_carta.valor << "-" << nueva_carta.cara << endl;
	
	carta_robada = mimazo.robarCarta();
	cout << (*(carta_robada)).valor << endl;
	mimazo.robarCarta();
	cout << (*(carta_robada)).valor << endl;

	mimazo.mezclarMazo();
	/*for(int i = 0; i<48; i++){
		cout << (*(carta_robada + i)).valor << "-" << (*(carta_robada + i)).cara << endl;
	}*/
}