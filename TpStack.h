//
// Created by lucasmoreno on 1/05/20.
//

#ifndef FINALTP_TPSTACK_H
#define FINALTP_TPSTACK_H

/*
 *
 Vamos a trabajar los nodos con memoria dinámica porsiacaso
 *
 */
#include "Nodo.h"
using namespace Linked;
template <class T>
class TpStack{
private:
    Nodo<T>*inicio;
    long long size;
public:
    TpStack(){
        this->inicio = nullptr;
        this->size = 0;
    }
    ~TpStack(){
        delete this->inicio;
    }
    T top(){
        return this->inicio->Element;
    }
    void pop(){
        if(this->size == 0){
            return;
        } else if(this->size == 1){
            delete this->inicio;
            this->inicio = nullptr;
        } else if(this->size > 1){
            Nodo<T>*aux = this->inicio->Next;
            delete this->inicio;
            this->inicio = aux;
        }
        --this->size;
    }
    void push(T Elemento){
        Nodo<T>* nuevo;
        nuevo->Element = Elemento;
        if(this->size == 0){
            this->inicio = nuevo;
        } else{
            nuevo->Next = this->inicio;
            this->inicio = nuevo;
        }
        ++this->size;
    }
    bool isEmpty(){
        return this->size == 0;
    }
    long long getSize(){
        return this->size;
    }
};
#endif //FINALTP_TPSTACK_H
