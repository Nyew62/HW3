
#ifndef NYEW_HW3_Q1_STUDENT_H
#define NYEW_HW3_Q1_STUDENT_H
#include <iostream>
#include "Person.h"
using namespace std;

class student:
        public Person{
public:
    student();
    int getCredits();
    void setCredits(int cred);
    student(int numofCredit);
    student(int cred, string Smajor);
    string getmajor();
    void setmajor(string Smajor);
private:
    int credits;
    string major;
};


#endif //NYEW_HW3_Q1_STUDENT_H
