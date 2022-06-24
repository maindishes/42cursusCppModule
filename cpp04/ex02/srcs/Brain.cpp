#include "../incs/Brain.hpp"

Brain::Brain(void)
{
    std::cout << "Brain default constructor called"<< std::endl;
}

Brain::Brain(const Brain &bra)
{
    for (int i=0; i< 100; i++)
    {
        this->ideas[i] = bra.ideas[i];
    }
    std::cout << "Brain copy constructor called" << std::endl;
}

Brain &Brain::operator=(const Brain &bra)
{
    for (int i=0; i < 100; i++)
    {
        this->ideas[i] = bra.ideas[i];
    }
    std::cout << "Brain assignment operator called" << std::endl;
    return (*this);
}

Brain::~Brain(void)
{
    std::cout << "Brain default destructor called" << std::endl;
}
const std::string &Brain::getIdea(int idx) const
{
    return (this->ideas[idx]);
}

void Brain::setIdea(int idx, std::string idea)
{
    this->ideas[idx] = idea;
}