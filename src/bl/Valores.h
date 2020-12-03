//
// Created by Mario Martinez on 03/12/20.
//

#ifndef HASH_ABIERTO_VALORES_H
#define HASH_ABIERTO_VALORES_H
#include <iostream>
#include <string.h>

class Valores {
public:
    Valores();

//    Valores(long mNum, Valores *mSig = nullptr);

    Valores(long mNum);

    virtual ~Valores();

    long getNum() const;

    void setNum(long mNum);

    Valores *getSig() const;

    void setSig(Valores *mSig);

private: // m_ = miembro de clase
    long m_num;
    Valores * m_sig;
};


#endif //HASH_ABIERTO_VALORES_H
