#include <iostream>
#include "TpStack.h"
#include "TpQueue.h"
using namespace std;
struct persona{
    string nombre;
    persona(string n){
        nombre = n;
    }
};
int main() {
    TP::Stack<persona*> *pilaNUmeros = new TP::Stack<persona*>();
    vector<persona*>* per = new vector<persona*>();
    per->push_back(new persona("Lucas"));
    per->push_back(new persona("Alejandro"));
    per->push_back(new persona("Moreno"));
    per->push_back(new persona("Olivos"));
    pilaNUmeros->push(per->at(0));
    pilaNUmeros->push(per->at(1));
    pilaNUmeros->push(per->at(2));
    pilaNUmeros->push(per->at(3));
    cout<<pilaNUmeros->top()->nombre;
    TP::Queue<persona>hola;
    return 0;
}
