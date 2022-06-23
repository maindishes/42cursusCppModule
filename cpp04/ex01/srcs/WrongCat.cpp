#include "../incs/WrongCat.hpp"

WrongCat::WrongCat(void)
{
    this->_type = "WrongCat";
    std::cout << "WrongCat default constructor called"<< std::endl;
}

WrongCat::WrongCat(const WrongCat &WrongCat)
{
    this->_type = WrongCat._type;
    std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &WrongCat)
{
    this->_type = WrongCat._type;
    std::cout << "WrongCat assignment operator called" << std::endl;
    return (*this);
}

WrongCat::~WrongCat(void)
{
    std::cout << "WrongCat default destructor called" << std::endl;
}

void WrongCat::makeSound(void) const
{
    std::cout
	<< "  \\    /\\ " << std::endl
    << "   )  (dd ')  " << std::endl
    << "   (  /  )  " << std::endl
	<< "   \\ (__)|   " << std::endl;
	std::cout << "> Meeeeow" << std::endl;
}
