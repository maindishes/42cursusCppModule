#pragma once
#ifndef ZOMBIE_CLASS_H
# define ZOMBIE_CLASS_H
# include <iostream>
# include <string>
class Zombie
{
    private:
        std::string _name;
    
    public:
        Zombie();
        Zombie(std::string name);
        ~Zombie();

        void    announce(void);
        Zombie* newZombie(std::string name);
        void    randomChump(std::string name);
};
#endif