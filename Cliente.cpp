//
// Created by MarianoFacundo on 01/06/2016.
//

#include "Cliente.h"


ostream& operator<<(ostream& os, Cliente cliente){
    return os<<"("<<cliente.getNumeroCliente()<<": "<<cliente.getNombreCliente()<<")";
}

istream& operator>>(istream& is, Cliente& cliente){
    return is>>cliente.getNumeroCliente()>>cliente.getNombreCliente();
}


