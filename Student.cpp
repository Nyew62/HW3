#include <iostream>
#include "Student.h"
using namespace std;

student::student(){credits=0;}
student::student(int numCred){credits = numCred;}
student::student(int cred, string Smajor){credits=cred;
major =Smajor;}

string student::getmajor() {return major;}
void student::setmajor(std::string Smajor) {major=Smajor;}
int student::getCredits(){return credits;}
void student::setCredits(int cred){credits=cred;}

