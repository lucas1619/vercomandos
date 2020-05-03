//
// Created by lucasmoreno on 1/05/20.
//

#ifndef FINALTP_HUMAN_H
#define FINALTP_HUMAN_H
class Human  {
protected:
    short PosX;
    short PosY;
    short Height;
    short Width;
    short FamilyMembers; //number of family members
    short UsePPHH;
    short UseSoap;
    short UseGel;
    short NeedPPHH;
    short NeedSoap;
    short NeedGel;
    short RandomDesire;
public:

    Human() {}
    ~Human() {}

    virtual void Dibujar(){};
    short getPosX() {return this->PosX;}
    short getPosY() {return this->PosY;}
    short getHeight() {return this->Height;}
    short getWidth()  {return this->Width;}
    short getFamilyMembers() {return this->FamilyMembers;}
    short getUsePPHH()       {return this->UsePPHH;}
    short getUseSoap()       {return this->UseSoap;}
    short getUseGel()        {return this->UseGel;}
    short getNeedPPHH()		 {return this->NeedPPHH;}
    short getNeedSoap()		 {return this->NeedSoap;}
    short getNeedGel()		 {return this->NeedGel;}
    short getRandomDesire()	 {return this->RandomDesire;}
};
#endif //FINALTP_HUMAN_H
