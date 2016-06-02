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
    int cantidadConsumos = 0;
    Cliente listaClientes[20];
    EstadoConsumo listaConsumos[100];
public:
    Servicio() { }

    const EstadoConsumo *getListaConsumos() const {
        return listaConsumos;
    }

    const Cliente *getListaClientes() const {
        return listaClientes;
    }

public:
    int insertarCliente(Cliente cliente)
    {
        if (cantidadActual==20)
            return -1;

        listaClientes[cantidadActual] = cliente;

        cantidadActual++;
        return cantidadActual-1;
    }

    EstadoConsumo temp[5];
    void consumoPorMes(int numeroCliente, int* consumos)
    {

        procesarConsumos(numeroCliente);
        ordenarPorConsumo(listaConsumos);

        if (listaConsumos[0].getConsumo()>=0)
        {
            consumos[0] = listaConsumos[1].getConsumo() - listaConsumos[0].getConsumo();
        }
        else
        {
            consumos[0] = 0;
        }
        for (int i=1;i<4;i++)
        {
            if (listaConsumos[1].getConsumo()>=0)
            {

                consumos[i] = listaConsumos[i+1].getConsumo();
                for(int j = 0; j<i; j++)
                {
                    consumos[i] -= consumos[j];
                }
            }
            else
            {
                consumos[i]=0;
            }

        }



    }



    void procesarConsumos(int numeroCliente)
    {
        EstadoConsumo temp;
        string s;
        cantidadConsumos=0;
        ifstream entra("consumos.txt");
        while(getline(entra,s)){
            istringstream iss(s);
            iss>>temp;
            if (temp.getNumeroCliente()==numeroCliente)
            {

                insertarConsumo(temp);
            }
            /*
            int ultimo = servicio.insertarCliente(cliente);

            cout<<"Cliente: "<<servicio.getListaClientes()[ultimo]<<endl;
             */
        }

        while (cantidadConsumos<5)
        {
            EstadoConsumo blanco = EstadoConsumo(numeroCliente, -1);
            insertarConsumo(blanco);
        }
    }
    EstadoConsumo *consumosCliente(int numeroCliente) {
        EstadoConsumo consumosCliente[5];
        int estActual = 0;

        EstadoConsumo temp;
        string s;
        ifstream entra("consumos.txt");
        while(getline(entra,s) && estActual<5){
            istringstream iss(s);
            iss>>temp;
            if (temp.getNumeroCliente()==numeroCliente)
            {
                consumosCliente[estActual++] = temp;
                insertarConsumo(temp);
            }
            /*
            int ultimo = servicio.insertarCliente(cliente);

            cout<<"Cliente: "<<servicio.getListaClientes()[ultimo]<<endl;
             */
        }

        while (estActual<5)
        {
            consumosCliente[estActual++] = EstadoConsumo(numeroCliente,-1);
        }

        for (int i = 0; i<5; i++)
        {
            cout<<consumosCliente[i]<<endl;
        }

        ordenarPorConsumo(consumosCliente);

        return consumosCliente;
    }

    void ordenarPorConsumo(EstadoConsumo consumosCliente[5])
    {
        EstadoConsumo temp;

        for(int i=0 ; i<4 ; i++)
        {
            for(int j = 0 ; j<4 ; j++)
            {
                if (consumosCliente[j].getConsumo() > consumosCliente[j+1].getConsumo())
                {
                    temp = consumosCliente[j];
                    consumosCliente[j] = consumosCliente[j+1];
                    consumosCliente[j+1] = temp;

                }
            }

        }


    }




    int insertarConsumo(EstadoConsumo consumo)
    {
        if (cantidadConsumos==5)
            return -1;

        listaConsumos[cantidadConsumos] = consumo;

        cantidadConsumos++;
        return cantidadConsumos-1;
    }

};


#endif //TRABAJODECLUA_SERVICIO_H
