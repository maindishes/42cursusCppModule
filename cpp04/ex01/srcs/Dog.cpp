#include "../incs/Dog.hpp"

Dog::Dog(void):Animal(), brain(new Brain())
{
    this->_type = "Dog";
    // this->brain = new Brain();
    std::cout << "Dog default constructor called"<< std::endl;
}

Dog::Dog(const Dog &dog) : Animal(dog), brain(new Brain(*dog.brain))
{
    // *(this->brain) = *(dog.getBrain());
    // this->_type = dog._type;
    // this->brain = new Brain(*dog.getBrain()); 
    std::cout << "Dog copy constructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &dog)
{
    if (this != &dog)
    {
        Animal::operator=(dog);
        if (this->brain)
            delete brain;
        this->brain = new Brain(*dog.brain); 
    }
    std::cout << "Dog assignment operator called" << std::endl;
    return (*this);
}

Dog::~Dog(void)
{
    delete brain;
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
}

Brain *Dog::getBrain(void) const
{
	return (this->brain);
}