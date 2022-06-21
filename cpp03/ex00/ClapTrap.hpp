#pragma once
#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
    private:
        std::string _name;
        unsigned int _hit_points;  // (10)
        unsigned int _energy_points; //(10)
        unsigned int _attack_damage; //(0)

    public:
        ClapTrap();
        ClapTrap(const std::string name);
        ClapTrap(const ClapTrap &clap);
        ~ClapTrap();
        ClapTrap& operator=(const ClapTrap &clap);

        void attack(std::string const & target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

        void display();
};

#endif