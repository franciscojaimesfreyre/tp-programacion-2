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
    EstadoConsumo* consumosCliente;


    while(getline(entra,s)){
        istringstream iss(s);
        iss>>cliente;
        int ultimo = servicio.insertarCliente(cliente);

        cout<<"----------------"<<endl<<"Cliente: "<<servicio.getListaClientes()[ultimo]<<endl;
        //consumosCliente = servicio.consumosCliente(servicio.getListaClientes()[ultimo].getNumeroCliente());
        int consumosPorMes[4];
        servicio.consumoPorMes(servicio.getListaClientes()[ultimo].getNumeroCliente(), consumosPorMes);

        for (int i=1;i<5;i++)

        {


            cout<<"Consumo mes "<<i<<":"<<consumosPorMes[i-1]<<endl;
        }





    }



    return 0;
}