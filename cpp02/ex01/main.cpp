#include "Fixed.hpp"

int main(void)
{
    Fixed a;
    Fixed const b(10);
    Fixed const c(42.42f);
    Fixed const d(b);
    // Fixed const e(-114544.34f);

    a = Fixed(1234.4321f);       // rval은 이름이 없는 임시객체 , 대입연산 수행후 소멸한다. 자기 할일을 다 했으므로.

    // std::cout << "origin a is" << b.getRawBits() << std::endl;
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