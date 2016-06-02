//
// Created by Francisco on 01/06/16.
//

#ifndef TRABAJODECLUA_ESTADOCONSUMO_H
#define TRABAJODECLUA_ESTADOCONSUMO_H

#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;


class EstadoConsumo {
private:

    int consumo;
    int numeroCliente;


public:


    EstadoConsumo(int numeroCliente, int consumo) : numeroCliente(numeroCliente), consumo(consumo) { }
    EstadoConsumo() : numeroCliente(0), consumo(0){};
    int getNumeroCliente() const {
        return numeroCliente;
    }

    void setNumeroCliente(int numeroCliente) {
        EstadoConsumo::numeroCliente = numeroCliente;
    }

    int getConsumo() const {
        return consumo;
    }

    void setConsumo(int consumo) {
        EstadoConsumo::consumo = consumo;
    }

    friend ostream& operator<<(ostream& os, EstadoConsumo e);
    friend istream& operator>>(istream& is, EstadoConsumo& e);


};


inline ostream& operator<<(ostream& os, EstadoConsumo e){
    return os<<"("<<e.getNumeroCliente()<<": "<<e.getConsumo()<<")";
}

inline istream& operator>>(istream& is, EstadoConsumo& e) {
    return is>>e.numeroCliente>>e.consumo;
}


#endif //TRABAJODECLUA_ESTADOCONSUMO_H
