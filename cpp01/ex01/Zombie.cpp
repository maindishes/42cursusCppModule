#include "Zombie.hpp"

Zombie::Zombie() : _name("Foo") 
{
    // Zombie::announce();
}

Zombie::Zombie(std::string name): _name(name) 
{
    // Zombie::announce();
}

Zombie::~Zombie()
{
    std::cout << this->_name  << " died !" << std::endl;
}

void Zombie::announce(void)
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name)
{
    this->_name = name;
}