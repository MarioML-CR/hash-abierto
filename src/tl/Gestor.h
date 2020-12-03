//
// Created by Mario Martinez on 03/12/20.
//

#ifndef HASH_ABIERTO_GESTOR_H
#define HASH_ABIERTO_GESTOR_H
#include "../bl/TablaHash.h"

using namespace std;

class Gestor {
public:
    Gestor();

    void addValores(int );

    string obtenerValor(int);
    int hashing(long);
private:
    TablaHash *tablaHash;
};


#endif //HASH_ABIERTO_GESTOR_H
