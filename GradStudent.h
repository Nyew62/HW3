
#ifndef NYEW_HW3_Q1_GRADSTUDENT_H
#define NYEW_HW3_Q1_GRADSTUDENT_H
#include <iostream>
#include "Student.h"
using namespace std;

class gStudent:
public student{
public: gStudent();
    gStudent(int sHours);
    gStudent(int cred, string major);
    int getHours();
    void setHours(int sHours);

private:
    int studyHours;

};

#endif //NYEW_HW3_Q1_GRADSTUDENT_H
