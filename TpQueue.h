//
// Created by lucasmoreno on 1/05/20.
//

#ifndef FINALTP_TOQUEUE_H
#define FINALTP_TOQUEUE_H

#include "Nodo.h"
namespace TP{
    template <class T>
    class Queue{
    private:
        DoubleLinked::Nodo<T> *frente;
        DoubleLinked::Nodo<T> *fin;
        long long size;
    public:
        Queue(){
            this->frente = this->fin = nullptr;
            this->size = 0;
        }
        ~Queue(){
            while(this->frente != nullptr && this->fin != nullptr){
                this->pop();
            }
            delete this->frente;
            delete this->fin;
        }
        void push(T nuevo)
        {
            DoubleLinked::Nodo<T> *nuevo_nodo = new DoubleLinked::Nodo<T>();
            nuevo_nodo->Element = nuevo;
            if (frente == nullptr)
            {
                this->frente = this->fin = nuevo_nodo;
            }
            else
            {
                this->fin->Next = nuevo_nodo;
                nuevo_nodo->Prev = this->fin;
            }
            this->fin = nuevo_nodo;
            this->size++;
        }
        void pop()
        {
            if(this->frente != nullptr && this->fin != nullptr){
                DoubleLinked::Nodo<T> *eliminar = this->frente;
                if (this->frente == this->fin)
                {
                    this->fin = this->frente = nullptr;
                }
                else
                {
                    frente = frente->Next;
                }
                delete eliminar;
                this->size--;
            }
        }
        long long getSize(){
            return this->size;
        }
        bool isEmpty(){
            return this->size == 0;
        }
        T front(){
            return this->frente->Element;
        }
    };
}
#endif //FINALTP_TOQUEUE_H
