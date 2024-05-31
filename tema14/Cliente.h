#pragma once
#include <set>
#include <string>
#include <iostream>

#include "Cuenta.h"

using namespace std;

class Cliente
{
private:
    string nombre;
    string DNI;
    set<Cuenta> cuentas;

public:
    Cliente();
    Cliente(string nombre, string DNI);

    void agregarCuenta(Cuenta &cuenta);
    set<Cuenta> getCuentas();
    string getNombre();
    string getDNI();

    bool operator<(const Cliente &otro) const;
    bool operator==(const string &DNI) const;
    friend ostream &operator<<(ostream &os, const Cliente &cliente);
    friend istream &operator>>(istream &is, Cliente &cliente);
};
