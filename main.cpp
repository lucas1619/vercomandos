#include <iostream>
#include "TpStack.h"
#include "TpQueue.h"
using namespace std;
int main() {
    TpStack<int> *pilaNUmeros = new TpStack<int>();
    pilaNUmeros->push(1);
    pilaNUmeros->push(2);
    pilaNUmeros->push(3);
    pilaNUmeros->push(4);
    cout<<pilaNUmeros->getSize()<<endl;
    pilaNUmeros->pop();
    pilaNUmeros->pop();
    pilaNUmeros->pop();
    pilaNUmeros->pop();
    cout<<pilaNUmeros->getSize()<<endl;
    return 0;
}
