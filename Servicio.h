//
// Created by MarianoFacundo on 01/06/2016.
//

#ifndef TRABAJODECLUA_SERVICIO_H
#define TRABAJODECLUA_SERVICIO_H

#include "Cliente.cpp"
#include "EstadoConsumo.cpp"
class Servicio {
private:
    int cantidadActual = 0;
    Cliente listaClientes[20];
public:
    const EstadoConsumo *getListaConsumos() const {
        return listaConsumos;
    }

    const Cliente *getListaClientes() const {
        return listaClientes;
    }

private:
    EstadoConsumo listaConsumos[100];
public:
    int insertarCliente(Cliente cliente)
    {
        if (cantidadActual==20)
            return -1;

        //listaClientes[cantidadActual] = cliente;

        cantidadActual++;
        return cantidadActual-1;
    }

};


#endif //TRABAJODECLUA_SERVICIO_H
