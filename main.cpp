#include <iostream>
#include "Cliente.cpp"
#include "Servicio.h"
using namespace std;

int main() {

    Cliente cliente ;
    string s;
    int n;
    ifstream entra("clientes.txt");
    while(getline(entra,s)){
        istringstream iss(s);
        iss>>cliente;
        cout<<"Cliente: "<<cliente<<endl;
    }

    return 0;
}