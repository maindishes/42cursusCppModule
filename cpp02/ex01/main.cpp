#include "Fixed.hpp"

int main(void)
{
    Fixed a;
    Fixed const b(10);
    Fixed const c(1.1f);
    Fixed const d(b);
    // Fixed const e(-114544.34f);

    a = Fixed(1234.4321f);

    std::cout << "origin a is" << b.getRawBits() << std::endl;
    std::cout << "a is " << a << std::endl;   
    std::cout << "b is " << b << std::endl;
    std::cout << "c is " << c << std::endl;
    std::cout << "d is " << d << std::endl;
    std::cout << "a is " << a.toInt() << " as integer" << std::endl;
    std::cout << "b is " << b.toInt() << " as integer" << std::endl;
    std::cout << "c is " << c.toInt() << " as integer" << std::endl;
    std::cout << "d is " << d.toInt() << " as integer" << std::endl;
    // std::cout << "e is " << e << std::endl;
    return 0;
}