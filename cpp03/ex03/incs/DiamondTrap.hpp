#pragma once
#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
    private:
        std::string _name;
        DiamondTrap(void);

    public:
        // DiamondTrap(void);
        DiamondTrap(const std::string name);
        DiamondTrap(const DiamondTrap &dia);
        ~DiamondTrap(void);

        DiamondTrap &operator=(const DiamondTrap &dia);

        void attack(const std::string &target);
        void whoAmI(void);
};

#endif