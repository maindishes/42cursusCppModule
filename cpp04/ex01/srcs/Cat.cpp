#include "../incs/Cat.hpp"

Cat::Cat(void): Animal(), brain(new Brain())
{
    this->_type = "Cat";
    // this->brain = new Brain();
    std::cout << "Cat default constructor called"<< std::endl;
}

Cat::Cat(const Cat &cat) : Animal(cat),brain(new Brain(*cat.brain))
{
    // *(this->brain) = *(cat.getBrain());
    // this->_type = cat._type;
    
    // this->brain = new Brain(*cat.getBrain());
    std::cout << "Cat copy constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &cat)
{
    // Animal::operator=(cat);
    if (this != &cat)
    {
        //this->_type = cat.getType();
        Animal::operator=(cat);
        if (this->brain)
            delete brain;
        brain = new Brain(*cat.brain);
    }
    std::cout << "Cat assignment operator called" << std::endl;
    return (*this);
}

Cat::~Cat(void)
{
    delete brain;
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

Brain *Cat::getBrain(void) const
{
	return (this->brain);
}