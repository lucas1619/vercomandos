#include <iostream>
#include "TpQueue.h"
#include "Human.h"
using namespace std;
int main() {
    TP::Queue<Human> *pilaNUmeros = new TP::Queue<Human>();

    cout<<pilaNUmeros->front().getPosX();
    return 0;
}
