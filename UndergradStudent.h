
#ifndef NYEW_HW3_Q1_UNDERGRADSTUDENT_H
#define NYEW_HW3_Q1_UNDERGRADSTUDENT_H
#include <iostream>
#include "Student.h"
using namespace std;
class Ungrad:
        public student{
public:
    Ungrad();
    Ungrad(int Gcred);
    int getGcredits();
    void setGcredits(int gCredits);
    bool genCreditReq();
    private:
    int genCredits;
};

#endif //NYEW_HW3_Q1_UNDERGRADSTUDENT_H
