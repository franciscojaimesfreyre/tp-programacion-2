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

    double consumo;
    int numeroCliente;


public:


    EstadoConsumo(int numeroCliente, double consumo) : numeroCliente(numeroCliente), consumo(consumo) { }

    int getNumeroCliente() const {
        return numeroCliente;
    }

    void setNumeroCliente(int numeroCliente) {
        EstadoConsumo::numeroCliente = numeroCliente;
    }

    double getConsumo() const {
        return consumo;
    }

    void setConsumo(string nombreCliente) {
        EstadoConsumo::consumo = consumo;
    }

    friend ostream& operator<<(ostream& os, EstadoConsumo e);
    friend istream& operator>>(istream& is, EstadoConsumo& e);


};


inline ostream& operator<<(ostream& os, EstadoConsumo e){
    return os<<"("<<e.getNumeroCliente()<<": "<<e.getConsumo()<<",)";
}

inline istream& operator>>(istream& is, EstadoConsumo& e) {
    return is >> e.numeroCliente >> e.consumo;
}


#endif //TRABAJODECLUA_ESTADOCONSUMO_H
