//
// Created by Mario Martinez on 03/12/20.
//

#ifndef HASH_ABIERTO_VALIDAR_H
#define HASH_ABIERTO_VALIDAR_H

#include <iostream>
using namespace std;

class Validar {
public:
    int ingresarInt(string);

    int nPrimoMenorQue(int); // retorna el número primo menor al indice pasado por argumento

    bool esPrimo(int); // Analiza si un número es primo

    static int stringASCII(string &);
};

#endif //HASH_ABIERTO_VALIDAR_H
