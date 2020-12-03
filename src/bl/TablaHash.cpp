//
// Created by Mario Martinez on 03/12/20.
//

#include "TablaHash.h"

TablaHash::TablaHash() {
    for (int i = 0; i < MAX; i++)
        m_vector [i] = nullptr;
}
TablaHash::~TablaHash() {
    for (int i = 0; i < MAX; i++)
        if (m_vector [i] != nullptr) {
            delete m_vector[i];
        }
}
void TablaHash::addValor(int indice, Valores * ptr) {
    if (m_vector[indice] == nullptr) {
        m_vector[indice] = ptr;
    } else {
        Valores * aux = m_vector[indice];
        while (aux->getSig() != nullptr) {
            aux = aux->getSig();
        }
        aux->setSig(ptr);

    }
}
Valores * TablaHash::getNumero(int indice, long num) {
    Valores * aux = m_vector[indice];
    while (aux != nullptr && aux->getNum() != num) {
        aux = aux->getSig();
    }
    return aux;
}