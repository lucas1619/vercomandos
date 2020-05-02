//
// Created by lucasmoreno on 1/05/20.
//

#ifndef FINALTP_NODO_H
#define FINALTP_NODO_H
#include <bits/stdc++.h>
using namespace std;
/*
 *
 Vamos a trabajar los nodos con memoria dinámica porsiacaso
 *
 */
namespace Linked{
    template <class T>
    struct Nodo{
        T Element;
        Nodo *Next;
    };
}
namespace DoubleLinked{
    template <class T>
    struct Nodo{
        T Element;
        Nodo *Next;
        Nodo *Prev;
    };
}
#endif //FINALTP_NODO_H
