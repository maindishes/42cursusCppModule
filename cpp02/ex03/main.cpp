#include "Fixed.hpp"
#include "Point.hpp"

int main(void)
{
    Point p(1,2);
    Point c(p);
    Point d;

    d = c;
    std::cout << d.get_x() << '\t' << d.get_y() << std::endl;
    std::cout << p.get_x() << '\t' << p.get_y() << std::endl;
    std::cout << c.get_x() << '\t' << c.get_y() << std::endl;
}