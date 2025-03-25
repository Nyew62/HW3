#ifndef NYEW_HW3_Q2_RECTANGLE_H
#define NYEW_HW3_Q2_RECTANGLE_H
#include <iostream>
#include "Polygon.h"
using namespace std;

class rectangle: public Polygon{
public:
    rectangle();
    rectangle(int newWidth, int newHeight);
    void setWidth(int newWidth);
    void setHeight(int newHeight);
    int getArea()override;
    void draw()override;
private:
    int width;
    int height;
};

#endif //NYEW_HW3_Q2_RECTANGLE_H
