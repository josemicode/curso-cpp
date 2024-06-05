#include "Cuenta.h"

Cuenta::Cuenta() {}

Cuenta::Cuenta(const Cuenta &otra)
{
    this->numero = otra.numero;
    this->saldo = otra.saldo;
    this->nro_credito = otra.nro_credito;
}

string Cuenta::getNumero() const
{
    return numero;
}

float Cuenta::getSaldo() const
{
    return saldo;
}

int Cuenta::getNro_Credito() const
{
    return nro_credito;
}

void Cuenta::setNumero(string _numero)
{
    numero = _numero;
}

void Cuenta::setSaldo(float _saldo)
{
    saldo = _saldo;
}

void Cuenta::setNro_Credito(int _nro_credito)
{
    nro_credito = _nro_credito;
}

bool Cuenta::operator<(const Cuenta &otra) const
{
    return stol(this->numero.substr(15)) < stol(otra.numero.substr(15));
}

ostream &operator<<(ostream &os, const Cuenta &cuenta)
{
    os << cuenta.numero << ", " << cuenta.saldo;
    return os;
}

istream &operator>>(istream &is, Cuenta &cuenta)
{
    is >> cuenta.numero >> cuenta.saldo >> cuenta.nro_credito;
    return is;
}
