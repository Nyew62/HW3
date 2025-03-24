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

using namespace std;

int main()
{
    Person p1("Tony", "Stark", 1, 21, 1950);
    cout << p1.getName() << " born on: " << p1.getBirthdate() << endl;

    return 0;
}







