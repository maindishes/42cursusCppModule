#include "Zombie.hpp"

int main()
{
    Zombie zb;
    Zombie nodong = Zombie("nodong");
    Zombie* dong = zb.newZombie("dong");
    delete dong;
    zb.randomChump("random");
}