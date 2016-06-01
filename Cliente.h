//
// Created by MarianoFacundo on 01/06/2016.
//

#ifndef TRABAJODECLUA_CLIENTE_H
#define TRABAJODECLUA_CLIENTE_H

#include <iostream>
using namespace std;


class Cliente {

public:
    Cliente(int numeroCliente, string nombreCliente) : numeroCliente(numeroCliente), nombreCliente(nombreCliente) { }

    int getNumeroCliente() const {
        return numeroCliente;
    }

    void setNumeroCliente(int numeroCliente) {
        Cliente::numeroCliente = numeroCliente;
    }

    string getNombreCliente() const {
        return nombreCliente;
    }

    void setNombreCliente(string nombreCliente) {
        Cliente::nombreCliente = nombreCliente;
    }

private:
    int numeroCliente;
    string nombreCliente;




};


#endif //TRABAJODECLUA_CLIENTE_H
