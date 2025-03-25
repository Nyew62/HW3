#include <iostream>
#include "UndergradStudent.h"
using namespace std;

Ungrad::Ungrad() {}
Ungrad::Ungrad(int Gcred){genCredits=Gcred;};
int Ungrad::getGcredits(){return genCredits;}
void Ungrad::setGcredits(int gCredits) {genCredits=gCredits;}

//Ungrad::Ungrad(int numCred) {}
bool Ungrad::genCreditReq() {
    if (genCredits>30){
        cout << "General Requirements met!"<< endl;
        return true;
    }else{
        cout << "More General Requirements need to be taken"<< endl;
        return false;
    }
}

