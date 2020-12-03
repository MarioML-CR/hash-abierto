//
// Created by Mario Martinez on 03/12/20.
//

#ifndef HASH_ABIERTO_TABLAHASH_H
#define HASH_ABIERTO_TABLAHASH_H
#include "Valores.h"

class TablaHash {
public:
    TablaHash();
    ~TablaHash();
    void addValor(int indice, Valores * ptr);
    Valores * getNumero(int indice, long num);
    enum {MAX = 30}; //para los campos de la tabla
private:
    Valores * m_vector[MAX];
};


#endif //HASH_ABIERTO_TABLAHASH_H
