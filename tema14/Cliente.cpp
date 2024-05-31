#include "Cliente.h"

Cliente::Cliente() {}

Cliente::Cliente(string nombre, string DNI)
{
    this->nombre = nombre;
    this->DNI = DNI;
}

void Cliente::agregarCuenta(Cuenta &cuenta)
{
    this->cuentas.insert(cuenta);
}

set<Cuenta> Cliente::getCuentas()
{
    return cuentas;
}

string Cliente::getNombre()
{
    return nombre;
}

string Cliente::getDNI()
{
    return DNI;
}

bool Cliente::operator<(const Cliente &otro) const
{
    return stol(this->DNI.substr(0, 8)) < stol(otro.DNI.substr(0, 8));
}

bool Cliente::operator==(const string &DNI) const
{
    return this->DNI == DNI;
}

ostream &operator<<(ostream &os, const Cliente &cliente)
{
    os << cliente.nombre << " " << cliente.DNI;
    return os;
}

istream &operator>>(istream &is, Cliente &cliente)
{
    is >> cliente.nombre >> cliente.DNI;
    return is;
}
