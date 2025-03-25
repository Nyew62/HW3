#ifndef NYEW_HW3_Q2_POLYGON_H
#define NYEW_HW3_Q2_POLYGON_H



class Polygon
{
public:
    Polygon();
    Polygon(int newWidth, int newHeight);
    void setWidth(int newWidth);
    void setHeight(int newHeight);
    virtual int getArea()=0;
  // virtual int getArea();
    virtual void draw()=0;

protected:
    int width = 0;
    int height = 0;

};

#endif //NYEW_HW3_Q2_POLYGON_H
