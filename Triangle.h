#ifndef NYEW_HW3_Q2_TRIANGLE_H
#define NYEW_HW3_Q2_TRIANGLE_H
#include "Polygon.h"
using namespace std;

class triangle: public Polygon{
public:
    triangle();
    triangle(int newWidth, int newHeight);
    void setWidth(int newWidth);
    void setHeight(int newHeight);
    int getArea()override;
    void draw()override;
private:
    int width;
    int height;
};


#endif //NYEW_HW3_Q2_TRIANGLE_H
