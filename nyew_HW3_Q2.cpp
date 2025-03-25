/*************************************************************************
** Author : A'Nyla Weathers
** Program : hw3, q2
** Date Created : March 24, 2025
** Date Last Modified : March 24, 2025
** Usage : No command line arguments
**
** Problem:
 * Showcasing Virtual Functions
 *
 *
*************************************************************************/


#include <iostream>
using namespace std;
#include <iostream>
#include "Rectangle.h"
#include "Triangle.h"

int main() {
rectangle rec(5,9);
cout << endl<<"area of rectangle: "<< rec.getArea()<< endl;
rec.draw();

triangle tri(10,5);
cout << endl<<"area of triangle: "<< tri.getArea()<<endl;
tri.draw();

rec.setHeight(2);
rec.setWidth(3);
    cout << endl<<"New area of rectangle: "<< rec.getArea()<< endl;
rec.draw();

tri.setWidth(6);
tri.setHeight(3);
    cout << endl<<"New area of triangle: "<< tri.getArea()<<endl;
    tri.draw();

    //Polygon p;
    //Question 1: The error is that polygon is an abstract data type because of the pure virtual functions
    // inside of polygon.
    // The parent function polygon creates functions for the child classes to use,
    // so itself doesn't work in the main function.


    //Question 2: The error of not being able to create a object because polygon is an abstract data type remains
    //The draw function is still a pure virtual function and the compiler doesn't allow draw to be unimplemented.

    return 0;
}

