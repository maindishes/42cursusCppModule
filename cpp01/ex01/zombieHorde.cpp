#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    if (N <= 0)
    {
        std::cout << "Parameter N is invalid" << std::endl;
        return NULL;
    }
    Zombie *z = new Zombie[N];
    // std::cout << "TEST" << "\n";

    // std::cout << std::endl;
    for (int i = 0; i < N; i++)
    {
        z[i].setName(name);
        z[i].announce();
    }
    return (z);
}