//
// Created by lucasmoreno on 1/05/20.
//

#ifndef FINALTP_CASHIER_H
#define FINALTP_CASHIER_H

#include "Human.h"
template <class T>
class Cashier:public Human<T> {
private:
public:

    Cashier(T posx) { this->PosX = posx; }
    ~Cashier(){}

    void Dibujar(){}
};
#endif //FINALTP_CASHIER_H
