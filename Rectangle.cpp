#include "Rectangle.h"

rectangle::rectangle(){}
rectangle::rectangle(int newWidth, int newHeight){width = newWidth;
    height = newHeight;}



void rectangle::setWidth(int newWidth){
    width = newWidth;}


void rectangle::setHeight(int newHeight){
    height = newHeight;}
    int rectangle::getArea() {
    return width*height;
}

void rectangle::draw(){
    for(int row=0; row<height;row++){
        for(int col=0; col< width; col++){
            cout <<"*";
        }
        cout << endl;
    }
}

