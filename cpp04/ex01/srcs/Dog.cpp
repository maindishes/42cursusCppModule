#include "../incs/Dog.hpp"

Dog::Dog(void):Animla()
{
    this->_type = "Dog";
    this->brain = new Brain();
    std::cout << "Dog default constructor called"<< std::endl;
}

Dog::Dog(const Dog &dog) : Animal(dog)
{
    // *(this->brain) = *(dog.getBrain());
    // this->_type = dog._type;
    this->brain = new Brain(*dog.getBrain()); 
    std::cout << "Dog copy constructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &dog)
{
    // Animal::operator=(dog);
    std::cout << "Dog assignment operator called" << std::endl;

    if (this != &dog)
    {
        // 그냥 값 복사 하는것도 생각 for 문 돌려서 하나하나 찾는거 
        this->_type = dog.getType();
        delete brain;
        brain = new Brain(*dog.getBrain()); 
    }
    return (*this);
}

Dog::~Dog(void)
{
    delete brain;
    std::cout << "Dog default destructor called" << std::endl;
}

Brain *Dog::getBrain(void) const
{
    return (this->brain);
}

const std::string &Dog::getBrainIdea(int idx) const
{
    return (this->brain->getIdea(idx));
}

void Dog::setBrainIdea(int idx, std::string idea)
{
    this->brain->setIdea(idx,idea);
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
