/*************************************************************************
** Author : A'Nyla Weathers
** Program : hw3, q1
** Date Created : March 23, 2025
** Date Last Modified : March 24, 2025
** Usage : No command line arguments
**
** Problem:
 * Showcasing multi level inheritance
 *
 *
*************************************************************************/



#include <iostream>
#include "Person.h"
#include "Student.h"
#include "GradStudent.h"
#include "UndergradStudent.h"

using namespace std;

int main()
{
    Person p1("Tony", "Stark", 1, 21, 1950);
    cout << p1.getName() << " born on: " << p1.getBirthdate() << endl;
student s1(15);
//cout << "student's name:"<<s1.getName()<<endl;
cout<< "students birthdate"<< s1.getBirthdate()<<endl;
cout<< "Credits"<<s1.getCredits()<<endl;
cout<< "********************************************************"<< endl;
gStudent grad1(800);
 grad1.setCredits(100);

//cout<< "Name: "<<grad1.getName()<<endl;
cout<<"Birthdate: "<< grad1.getBirthdate()<< endl;
cout << "credits: "<< grad1.getCredits()<< endl;
cout<<"study hours: "<< grad1.getHours()<<endl;
cout<< "********************************************************"<< endl;
Ungrad ungrad1(15);
ungrad1.setCredits(20);
//cout << "Name: "<< ungrad1.getName()<<endl;
cout << "credits: "<<ungrad1.getCredits()<< endl;
cout << "General credits: "<<ungrad1.getGcredits()<<endl;
cout << "general credits: "<< ungrad1.genCreditReq()<< endl;
    return 0;
}







