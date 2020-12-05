//
// Created by Mario Martinez on 03/12/20.
//

#include "Gestor.h"
#include "../ui/utilitario/Validar.h"

Validar validacion;



Gestor::Gestor() {
    tablaHash = new TablaHash();
}

int Gestor::hashing(long num) {
    return (num%(TablaHash::MAX-1));
//    int valor = 29;
//    return (num % valor);
}

void Gestor::addValores(int pValor) {
    tablaHash->addValor(hashing(pValor), new Valores(pValor));
}

string Gestor::optenerValor(int pValor) {
    Valores * valor = tablaHash->getNumero(hashing(pValor),pValor);
    string msg;
    if (valor != nullptr){
        msg = "El Valor de búsqueda es: " + to_string(valor->getNum()) + "\n";
    } else {
        msg = "No existe ningun registro que corresponda con el índice ingresado\n";
    }
    return msg;
}
