#include "Point.hpp"

float   detSign(Point p1, Point p2, Point p3)
{
    float temp;
    
    temp =( 
        (p3.getX().toFloat() - p1.getX().toFloat()) *
        (p2.getY().toFloat() - p1.getY().toFloat()) -
        (p2.getX().toFloat() - p1.getX().toFloat()) *
        (p3.getY().toFloat() - p1.getY().toFloat())
    );
    return (temp);
}

bool    bsp(Point a, Point b, Point c, Point point)
{
    float   d1,d2,d3;
    bool    neg, pos;

    d1 = detSign(a,b,point);
    d2 = detSign(b,c,point);
    d3 = detSign(c,a,point);

    neg = (d1 <= 0) || (d2 <= 0) || (d3 <= 0);
    pos = (d1 >= 0) || (d2 >= 0) || (d3 >= 0);

    return !(neg && pos);
}