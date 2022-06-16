#pragma once
#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"
# include "Point.hpp"

class Point
{
    private:
        Fixed const _x;
        Fixed const _y;
    
    public:
        Point();
        Point(const float x, const float y);
        Point(const Fixed x, const Fixed y);
        Point(const Point &pt);
        ~Point();

        Point& operator=(const Point &pt);

        const Fixed& getX(void) const;
        const Fixed& getY(void) const;
};

bool bsp(Point const a, Point const b, Point const c, Point const point);


#endif