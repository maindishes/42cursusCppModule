#include "../incs/Cat.hpp"

Cat::Cat(void)
{
    this->_type = "Cat";
    std::cout << "Cat default constructor called"<< std::endl;
}

Cat::Cat(const Cat &cat)
{
    this->_type = cat._type;
    std::cout << "Cat copy constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &cat)
{
    this->_type = cat._type;
    std::cout << "Cat assignment operator called" << std::endl;
    return (*this);
}

Cat::~Cat(void)
{
    std::cout << "Cat default destructor called" << std::endl;
}

void Cat::makeSound(void) const
{
    std::cout
	<< "  \\    /\\ " << std::endl
    << "   )  ( ')  " << std::endl
    << "   (  /  )  " << std::endl
	<< "   \\ (__)|   " << std::endl;
	std::cout << "> Meeeeow" << std::endl;
}
