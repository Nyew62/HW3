
#ifndef NYEW_HW3_Q1_PERSON_H
#define NYEW_HW3_Q1_PERSON_H
#include <string>

class Person
{
public:
    Person();
    Person(std::string first, std::string last, int year, int day, int month);
    std::string getName();
    std::string getBirthdate();

private:
    std::string Fname;
    std::string Lname;
    int birthDay;
    int birthMonth;
    int birthYear;

protected:
    /*You may move private members to protected if needed*/


};




#endif //NYEW_HW3_Q1_PERSON_H
