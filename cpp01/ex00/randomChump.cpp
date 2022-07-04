#include "Zombie.hpp"

void Zombie::randomChump(std::string name)
{
    Zombie *dong;
    dong = Zombie::newZombie(name);
    delete dong;

    // Zombie nodong = Zombie(name);
   
}