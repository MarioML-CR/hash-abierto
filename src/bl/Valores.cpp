//
// Created by Mario Martinez on 03/12/20.
//

#include "Valores.h"

Valores::Valores() {
    m_num = 0;
    m_sig = nullptr;
}

Valores::Valores(long mNum) {
    setSig(nullptr);
    setNum(mNum);
}

Valores::~Valores() {
    if (m_sig != nullptr) delete m_sig;
}

long Valores::getNum() const {
    return m_num;
}

void Valores::setNum(long mNum) {
    m_num = mNum;
}

Valores *Valores::getSig() const {
    return m_sig;
}

void Valores::setSig(Valores *ptr) {
    m_sig = ptr;
}