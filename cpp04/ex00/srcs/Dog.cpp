#include "../incs/Dog.hpp"

Dog::Dog(void):Animal()
{
    this->_type = "Dog";
    std::cout << "Dog default constructor called"<< std::endl;
}

Dog::Dog(const Dog &dog): Animal(dog)
{
    // this->_type = dog._type;
    std::cout << "Dog copy constructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &dog)
{
    this->_type = dog._type;
    // Animal::operator=(dog);
    std::cout << "Dog assignment operator called" << std::endl;
    return (*this);
}

Dog::~Dog(void)
{
    std::cout << "Dog default destructor called" << std::endl;
}

void Dog::makeSound(void) const
{
	std::cout
	<<"       __" << std::endl
    <<"     /\\/'-," << std::endl
    <<" ,--\'\'\'\'  /" << std::endl
	<<"_,'. )   \\__" << std::endl
	<<"\"\"----\"\"\" --" << std::endl;
	std::cout << "> Wouf Wouf!" << std::endl;
    std::cout << std::endl;
}
