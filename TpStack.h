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
    Nodo<T>* crearNodo(T newData){
        Nodo<T>* nuevoNodo = new Nodo<T>();
        nuevoNodo->Element = newData;
        nuevoNodo->Next = nullptr;
        return nuevoNodo;
    }
    void DestruirNodo(Nodo<T> * nodo){
        delete nodo;
    }
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
        if(!this->isEmpty()){
            Nodo<T> * primero = this->inicio;
            this->inicio = this->inicio->Next;
            this->DestruirNodo(primero);
            --this->size;
        }
    }
    void push(T Elemento){
        Nodo<T> * insertedNode = crearNodo(Elemento);
        insertedNode->Next = this->inicio;
        this->inicio = insertedNode;
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
