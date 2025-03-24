
#ifndef NYEW_HW3_Q1_STUDENT_H
#define NYEW_HW3_Q1_STUDENT_H
#include <iostream>
#include "Person.h"
using namespace std;

class student:
        public Person{
public:
    student();
    int getCredits(){return credits;};
    void setCredits(int cred){credits=cred;}
    student(int numofCredit);
private:
    int credits;
};


#endif //NYEW_HW3_Q1_STUDENT_H
