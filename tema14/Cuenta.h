#pragma once
#include <iostream>
#include<string>

using namespace std;

class Cuenta{
    private:
        string numero;
        float saldo;
        int nro_credito;

    public:
        Cuenta();
        Cuenta(const Cuenta& otra);
        bool operator<(const Cuenta& otra) const;
        friend class Cliente;
        friend ostream& operator<<(ostream &os, const Cuenta& cuenta);
        friend istream& operator>>(istream &is, Cuenta& cuenta);
};