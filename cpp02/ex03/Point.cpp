#include "Point.hpp"

Point::Point() : _x(Fixed(0)), _y(Fixed(0)) {}

Point::Point(const float x, const float y) : _x(Fixed(x)), _y(Fixed(y)) {}

Point::Point(const Fixed x, const Fixed y) : _x(Fixed(x)), _y(Fixed(y)) {}

Point::Point(const Point &pt) : _x(pt._x), _y(pt._y) {}

Point::~Point() {}

Point   &Point::operator=(const Point &pt)
{
    const_cast<Fixed&>(_x) = pt.getX();
    const_cast<Fixed&>(_y) = pt.getY();
    return (*this);
}

const Fixed& Point::getX(void) const
{
    return _x;
}

const Fixed& Point::getY(void) const
{
    return _y;
}


