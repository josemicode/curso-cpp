#pragma once
#include <set>

#include "Cuenta.h"

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

    bool operator<(const Cliente &otro) const;
    bool operator==(const string &DNI) const;
    friend ostream &operator<<(ostream &os, const Cliente &cliente);
    friend istream &operator>>(istream &is, Cliente &cliente);
};