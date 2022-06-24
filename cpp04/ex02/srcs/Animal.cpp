#include "../incs/Animal.hpp"

Animal::Animal(void) : _type("Animal")
{
    std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const Animal &ani):_type(ani.getType())
{
    std::cout << "Animal copy constructor called" << std::endl;
}

Animal &Animal::operator=(const Animal &ani)
{
    this->_type = ani.getType();
    std::cout << "Animal assignment operator called" << std::endl;
    return (*this);
}

const std::string &Animal::getType(void) const
{
    return (this->_type);
}

Animal::~Animal(void)
{
    std::cout << "Animal default destructor called" << std::endl;
}