#include <iostream>
#include "TpStack.h"
#include "TpQueue.h"
using namespace std;
int main() {
    TpStack<int> *pilaNUmeros = new TpStack<int>();
    pilaNUmeros->push(8);
    pilaNUmeros->push(9);
    pilaNUmeros->push(10);
    pilaNUmeros->push(11);
    pilaNUmeros->push(12);
    cout<<pilaNUmeros->getSize()<<endl;
    pilaNUmeros->pop();
    pilaNUmeros->pop();
    cout<<pilaNUmeros->getSize()<<endl;
    cout<<pilaNUmeros->top();
    return 0;
}
