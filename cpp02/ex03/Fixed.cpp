#include "Fixed.hpp"

Fixed::Fixed():_fixed_point_value(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value) : _fixed_point_value(value << this->_nb_of_fractional_bits)
{
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float value) : _fixed_point_value(roundf(value * (1 << _nb_of_fractional_bits)))
{
    std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed):_fixed_point_value(fixed._fixed_point_value)
{
    std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed & Fixed::operator=(const Fixed &fixed)
{
    std::cout << "Copy assignation operator called" << std::endl;
    this->_fixed_point_value = fixed.getRawBits();
    return *this;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->_fixed_point_value);
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->_fixed_point_value = raw;
}

int Fixed::toInt(void) const
{
    return (_fixed_point_value >> _nb_of_fractional_bits);
}

float Fixed::toFloat(void) const
{
    return ((float)_fixed_point_value / (1 << _nb_of_fractional_bits));
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
    os << fixed.toFloat();
    return os;
}
/* 비교연산 */
bool    Fixed::operator>(const Fixed &fixed) const
{
    return (this->toFloat() > fixed.toFloat());
}

bool    Fixed::operator<(const Fixed &fixed) const
{
    return (this->toFloat() < fixed.toFloat());
}

bool    Fixed::operator>=(const Fixed &fixed) const
{
    return (this->toFloat() >= fixed.toFloat());
}

bool    Fixed::operator<=(const Fixed &fixed) const
{
    return (this->toFloat() <= fixed.toFloat());
}

bool    Fixed::operator==(const Fixed &fixed) const
{
    return (this->toFloat() == fixed.toFloat());
}
bool    Fixed::operator!=(const Fixed &fixed) const
{
    return (this->toFloat() != fixed.toFloat());
}

Fixed   Fixed::operator+(const Fixed &fixed) const
{
    return Fixed(this->toFloat() + fixed.toFloat());
}

Fixed   Fixed::operator-(const Fixed &fixed) const
{
    return Fixed(this->toFloat() - fixed.toFloat());
}

Fixed   Fixed::operator*(const Fixed &fixed) const
{
    return Fixed(this->toFloat() * fixed.toFloat());
}

Fixed   Fixed::operator/(const Fixed &fixed) const
{
    return Fixed(this->toFloat() / fixed.toFloat());
}


/* 전위, 후위 */
Fixed   &Fixed::operator++(void)
{
    this->_fixed_point_value++;
    return (*this); // this의 값? this 의 포인터? 를 리턴
}
Fixed   Fixed::operator++(int)
{
    Fixed before(*this);

    this->_fixed_point_value++;
    return (before); 
}

Fixed   &Fixed::operator--(void)
{
    this->_fixed_point_value--;
    return (*this); // this의 값? this 의 포인터? 를 리턴
}
Fixed   Fixed::operator--(int)
{
    Fixed before(*this);

    this->_fixed_point_value--;
    return (before); 
}

/* min, max */

Fixed   &Fixed::min(Fixed &a, Fixed &b)
{
    if (a.getRawBits() < b.getRawBits())
        return a;
    return b;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
    if (a.getRawBits() < b.getRawBits())
        return a;
    return b;
}

Fixed   &Fixed::max(Fixed &a, Fixed &b)
{
    if (a.getRawBits() < b.getRawBits())
        return b;
    return a;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
    if (a.getRawBits() < b.getRawBits())
        return b;
    return a;
}