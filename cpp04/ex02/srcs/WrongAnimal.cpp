#include "../incs/WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : _type("WrongAnimal")
{
    std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &ani):_type(ani.getType())
{
    std::cout << "WrongAnimal copy constructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &ani)
{
    this->_type = ani.getType();
    std::cout << "WrongAnimal assignment operator called" << std::endl;
    return (*this);
}

const std::string &WrongAnimal::getType(void) const
{
    return (this->_type);
}

WrongAnimal::~WrongAnimal(void)
{
    std::cout << "WrongAnimal default destructor called" << std::endl;
}

void WrongAnimal::makeSound(void) const
{
    std::cout << "WrongAnimal make sounds" << std::endl;
}