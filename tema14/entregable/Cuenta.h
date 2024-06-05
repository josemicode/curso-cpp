#pragma once
#include <iostream>
#include <string>

using namespace std;

class Cuenta
{
private:
    string numero;
    float saldo;
    int nro_credito;

public:
    //Constructors
    Cuenta();
    Cuenta(const Cuenta &otra);
    //Getters
    string getNumero() const;
    float getSaldo() const;
    int getNro_Credito() const;
    //Setters
    void setNumero(string _numero);
    void setSaldo(float _saldo);
    void setNro_Credito(int _nro_credito);
    //Operators
    bool operator<(const Cuenta &otra) const;
    friend class Cliente;
    friend ostream &operator<<(ostream &os, const Cuenta &cuenta);
    friend istream &operator>>(istream &is, Cuenta &cuenta);
};
