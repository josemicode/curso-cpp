#include <iostream>
#include <fstream>
#include <set>
#include <string>
#include <iomanip>

#include "Cliente.h"
#include "Cuenta.h"

using namespace std;

template <typename Container>
int encontrarIndice(const Container &clientes, const string &DNI);

void leerClientes(const string &archivoClientes, set<Cliente> &clientes);
void leerCuentas(const string &archivoCuentas, set<Cliente> &clientes);

void imprimirClientes(const set<Cliente> &clientes);
void crearResumenCuentas(const set<Cliente> &clientes);

int main()
{
    set<Cliente> clientes;

    leerClientes("clientes2023.txt", clientes);
    leerCuentas("cuentas2023.txt", clientes);

    imprimirClientes(clientes);
    crearResumenCuentas(clientes);

    return 0;
}

template <typename Container>
int encontrarIndice(const Container &clientes, const string &DNI)
{
    int indice = -1, busqueda = 0;
    for (const auto &c : clientes)
    {
        if (c == DNI)
        {
            indice = busqueda;
            break;
        }
        busqueda++;
    }
    return indice;
}

void leerClientes(const string &archivoClientes, set<Cliente> &clientes)
{
    ifstream archivo(archivoClientes);
    string nombre, DNI;

    while (archivo >> nombre >> DNI)
    {
        Cliente cliente(nombre, DNI);
        clientes.insert(cliente);
    }
}

void leerCuentas(const string &archivoCuentas, set<Cliente> &clientes)
{
    ifstream archivo(archivoCuentas);
    string DNI, numero;
    float saldo;
    int nro_credito;

    while (archivo >> DNI >> numero >> saldo >> nro_credito)
    {
        Cuenta cuenta;
        //cuenta.numero = numero;
		cuenta.setNumero(numero);
        //cuenta.saldo = saldo;
		cuenta.setSaldo(saldo);
        //cuenta.nro_credito = nro_credito;
		cuenta.setNro_Credito(nro_credito);

        for (auto &cliente : clientes)
        {
            if (cliente == DNI)
            {
				Cliente &nonConstCliente = const_cast<Cliente &>(cliente);
                nonConstCliente.agregarCuenta(cuenta);
                int indice = encontrarIndice(clientes, DNI);
                cout << "Al cliente " << setw(3) << setfill('0') << indice << " se ha agregado la cuenta con numero " << numero << endl;
                break;
            }
        }
    }
}

void imprimirClientes(const set<Cliente> &clientes)
{
    for (const auto &cliente : clientes)
    {
        cout << left << setw(30) << setfill(' ') << cliente.getNombre()
             << setw(12) << cliente.getDNI()
             << right << setw(3) << cliente.getCuentas().size() << endl;
    }
}

void crearResumenCuentas(const set<Cliente> &clientes)
{
    ofstream resumen("Resumen de Cuentas.txt");
    for (const auto &cliente : clientes)
    {
        for (const auto &cuenta : cliente.getCuentas())
        {
            resumen << cuenta.getNumero() << ", "
                    << cuenta.getSaldo() << ", "
                    << cliente.getDNI() << ", "
                    << cliente.getNombre() << endl;
        }
    }
}
