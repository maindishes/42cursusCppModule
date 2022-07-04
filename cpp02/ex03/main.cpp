#include "Point.hpp"

int main(void)
{
    Point p(1,2);
    Point c(p);
    Point d;

    d = c;
    std::cout << d.getX() << '\t' << d.getY() << std::endl;
    std::cout << p.getX() << '\t' << p.getY() << std::endl;
    std::cout << c.getX() << '\t' << c.getY() << std::endl;

    // Point a1(8, 3) ,b1(5, 9), c1(1, 1), p1(4, 4), p2(4, 1);

	// Point a2(5.5, -2.5), b2(2.5, -5.0), c2(1.5, -1.0), p3(3.5, -3.0), p4(5.0, -0.5);

	// Fixed x1(8), y1(3), x2(5), y2(9), x3(1), y3(1), x4(4), y4(4), x5(4), y5(1);
	
    // Point a3(x1, y1), b3(x2, y2), c3(x3, y3), p5(x4, y4), p6(x5, y5);
    {
		Point	a(5, 0), b(2.5, 5), c(0, 0);
		Point	point(0.5, 0.5);

		std::cout << "It is ";
		if (!bsp(a, b, c, point))
			std::cout << "not ";
		std::cout << "insde of a triangle" << std::endl;
	}
	{
		Point	a(5, 0), b(2.5, 5), c(0, 0);
		Point	point(1, 2);

		std::cout << "It is ";
		if (!bsp(a, b, c, point))
			std::cout << "not ";
		std::cout << "insde of a triangle" << std::endl;
	}
	{
		Point	a(5, 0), b(2.5, 5), c(0, 0);
		Point	point(5, 0);

		std::cout << "It is ";
		if (!bsp(a, b, c, point))
			std::cout << "not ";
		std::cout << "insde of a triangle" << std::endl;
	}
}