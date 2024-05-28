#include<iostream>
#include<array>
#include<vector>
#include<set>
#include<list>

#include"Cuenta.h"
#include"Cliente.h"

using namespace std;

template<typename container> int encontrarIndice(container clientes, string DNI);


istream& operator>>(istream& is, Cliente& cliente) {
	return  is >> dato;
}

istream& operator>>(istream& is, Cuenta& cuenta) {
	return  is >> dato;
}

ostream& operator<<(ostream& os, const Cliente& cliente) {
	return os << dato;
}

ostream& operator<<(ostream& os, const Cuenta& cuenta) {
	return os << dato;
}


int main() {


	return 0;
}


template<typename container> int encontrarIndice(container clientes, string DNI) {
	int indice = -1, busqueda = 0;
	for (const auto& c : clientes)
	{
		if (c == DNI) {
			indice = busqueda;
			break;
		}
		busqueda++;
	}
	return indice;
}