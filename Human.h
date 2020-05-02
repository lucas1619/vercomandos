//
// Created by lucasmoreno on 1/05/20.
//

#ifndef FINALTP_HUMAN_H
#define FINALTP_HUMAN_H
template <class T>
class Human {
protected:
    T PosX;
    T PosY;
    T Height;
    T Width;
    T FamilyMembers; //number of family members
    T UsePPHH;
    T UseSoap;
    T UseGel;
    T NeedPPHH;
    T NeedSoap;
    T NeedGel;
    T RandomDesire;

    Human<T>* next;

public:

    Human() {}
    ~Human() {}

    virtual void Dibujar() = 0;

    void setNext(Human<T>* n) {
        this->next = n;
    }
    T getPosX() {return this->PosX;}
    T getPosY() {return this->PosY;}
    T getHeight() {return this->Height;}
    T getWidth()  {return this->Width;}
    T getFamilyMembers() {return this->FamilyMembers;}
    T getUsePPHH()       {return this->UsePPHH;}
    T getUseSoap()       {return this->UseSoap;}
    T getUseGel()        {return this->UseGel;}
    T getNeedPPHH()		 {return this->NeedPPHH;}
    T getNeedSoap()		 {return this->NeedSoap;}
    T getNeedGel()		 {return this->NeedGel;}
    T getRandomDesire()	 {return this->RandomDesire;}
    Human<T>* getNext() {
        return this->next;
    }
};
#endif //FINALTP_HUMAN_H
