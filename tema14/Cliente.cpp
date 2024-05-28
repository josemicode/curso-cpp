#include"Cliente.h"
Cliente::Cliente(){
    this->cuentas;
}
 Cliente::Cliente(string nombre, string DNI){
     this->nombre = nombre;
     this->DNI = DNI;
 }

 void Cliente::agregarCuenta(Cuenta& cuenta) {
     this->cuentas.insert(cuenta);
 }

set<Cuenta> Cliente::getCuentas(){
    return cuentas;
}

bool Cliente::operator<(const Cliente& otro) const{
    return stol(this->DNI.substr(0, 8)) < stol(otro.DNI.substr(0, 8));
}

bool Cliente::operator==(const string& DNI) const{
    return this->DNI == DNI;
}

string Cliente::getNombre(){
    return nombre;
}