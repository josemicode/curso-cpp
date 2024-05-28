#include"Cuenta.h"
Cuenta::Cuenta(){

}
Cuenta::Cuenta(const Cuenta& otra){
    this->numero = otra.numero;
    this->saldo = otra.saldo;
    this->nro_credito = otra.nro_credito;
}
bool Cuenta::operator<(const Cuenta& otra) const{
    return stol(this->numero.substr(15)) < stol(otra.numero.substr(15));
}