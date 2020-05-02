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
namespace TP{
    template <class T>
    class Stack{
    private:
        Linked::Nodo<T>*inicio;
        long long size;
        Linked::Nodo<T>* crearNodo(T newData){
            Linked::Nodo<T>* nuevoNodo = new Linked::Nodo<T>();
            nuevoNodo->Element = newData;
            nuevoNodo->Next = nullptr;
            return nuevoNodo;
        }
        void DestruirNodo(Linked::Nodo<T> * nodo){
            delete nodo;
        }
    public:
        Stack(){
            this->inicio = nullptr;
            this->size = 0;
        }
        ~Stack(){
            delete this->inicio;
        }
        T top(){
            return this->inicio->Element;
        }
        void pop(){
            if(!this->isEmpty()){
                Linked::Nodo<T> * primero = this->inicio;
                this->inicio = this->inicio->Next;
                this->DestruirNodo(primero);
                --this->size;
            }
        }
        void push(T Elemento){
            Linked::Nodo<T> * insertedNode = crearNodo(Elemento);
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
}
#endif //FINALTP_TPSTACK_H