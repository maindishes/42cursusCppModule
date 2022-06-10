#include "Zombie.hpp"

int main()
{
    // Zombie z;
    // family = Zombie::zombieHorde(5,"family");
    // Zombie *zs;
    // Zombie z;

    std::string name[] = {"junyopar", "keokim", "minjkim2", "donpark", "joonpark", "jihoh", "hyopark", "jji"};
    std::cout << "-----------------" << std::endl;
    std::cout << "Zombie 객체 배열 생성" << std::endl;

    for(int i = 0; i < 8; i++)
    {
        Zombie *family = zombieHorde(5,name[i]);
        delete []family;
    } 
    // while (1)
    //     ;
    return (0);
}