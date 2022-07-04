#include "Fixed.hpp"

Fixed::Fixed():_fixed_point_value(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value) : _fixed_point_value(value << this->_nb_of_fractional_bits)      // << 곱  ,,  >> 나누기 
{
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float value) : _fixed_point_value(roundf(value * (1 << _nb_of_fractional_bits)))
{
    // std::cout << "Test==============" << std::endl;
    // std::cout << (double)(_fixed_point_value / pow(2,8)) << std::endl;
    std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = fixed;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed &fixed)
{
    std::cout << "Copy assignation operator called" << std::endl;
    this->_fixed_point_value = fixed.getRawBits();
    return *this;
}

int Fixed::getRawBits(void) const
{
    // std::cout << "getRawBits member function called" << std::endl;
    return (this->_fixed_point_value);
}

void Fixed::setRawBits(int const raw)
{
    // std::cout << "setRawBits member function called" << std::endl;
    this->_fixed_point_value = raw;
}

int Fixed::toInt(void) const
{
    return (_fixed_point_value >> _nb_of_fractional_bits);
}

float Fixed::toFloat(void) const
{
    // std::cout << "TEST----------"<< std::endl;
    // std::cout << _fixed_point_value << std::endl;
    return (static_cast<float>(_fixed_point_value) / (1 << _nb_of_fractional_bits));
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed) // 연산자 오버로딩 반환값이 ostream 인것 
{
    os << fixed.toFloat();
    return os;
}

