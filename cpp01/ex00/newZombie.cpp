#include "Zombie.hpp"

Zombie* Zombie::newZombie(std::string name)
{
    // std::cout << "TEST Dong---"<< std::endl;
    return (new Zombie(name));
}