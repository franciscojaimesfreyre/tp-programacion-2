//
// Created by Francisco on 01/06/16.
//

#ifndef TRABAJODECLUA_ESTADOCONSUMO_H
#define TRABAJODECLUA_ESTADOCONSUMO_H

#include <iostream>
using namespace std;


class EstadoConsumo {
private:

    int numeroCliente;
    double consumo;


public:

    EstadoConsumo(int numeroCliente, double consumo) : numeroCliente(numeroCliente), consumo(consumo) { }

    int getNumeroCliente() const {
        return numeroCliente;
    }

    void setNumeroCliente(int numeroCliente) {
        EstadoConsumo::numeroCliente = numeroCliente;
    }

    string getConsumo() const {
        return consumo;
    }

    void setConsumo(string nombreCliente) {
        EstadoConsumo::consumo = consumo;
    }


};


#endif //TRABAJODECLUA_ESTADOCONSUMO_H
