#include <iostream>
#include "GradStudent.h"
using namespace std;

gStudent::gStudent(int sHours){ studyHours=sHours;}
gStudent::gStudent(int cred, string Smajor):student( cred, Smajor){}

void gStudent::setHours(int sHours) {studyHours=sHours;}
int gStudent::getHours(){return studyHours;}

