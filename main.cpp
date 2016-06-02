#include <iostream>
#include "Cliente.cpp"
#include "Servicio.h"
using namespace std;

int main() {
    Servicio servicio;
    Cliente cliente ;
    string s;
    int n;
    ifstream entra("clientes.txt");
    while(getline(entra,s)){
        istringstream iss(s);
        iss>>cliente;
        int ultimo = servicio.insertarCliente(cliente);

        cout<<"Cliente: "<<servicio.getListaClientes()[ultimo]<<endl;


    }


    EstadoConsumo consumosCliente[5];
    int estActual = 0;

    EstadoConsumo temp;
    string ss;
    ifstream entra2("consumos.txt");
    while(getline(entra2,ss)){
        istringstream iss(ss);
        iss>>temp;
        cout<<temp.getNumeroCliente();


        /*
        int ultimo = servicio.insertarCliente(cliente);

        cout<<"Cliente: "<<servicio.getListaClientes()[ultimo]<<endl;
         */


    }




    return 0;
}