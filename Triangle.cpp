#include <iostream>
#include "Triangle.h"
using namespace std;

triangle::triangle(){}
triangle::triangle(int newWidth, int newHeight){width = newWidth;
    height = newHeight;}



void triangle::setWidth(int newWidth){
    width = newWidth;}


void triangle::setHeight(int newHeight){
    height = newHeight;}
int triangle::getArea() {
    return width*height;
}

void triangle::draw(){
    int width=1;
    for(int row=0; row<height;row++){
        for(int space=0; space<(height -row-1);space++){
            cout << " ";

        }
        for(int col=0; col< width; col++){
            cout <<"*";
        }
        cout << endl;
        width= width+2;
    }
}

