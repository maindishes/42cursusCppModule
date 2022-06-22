#pragma once
#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
    // private:
    //     ScavTrap(void);   // 왜 default 생성자를 여기다 뒀지? 
    private:
        std::string name;
        DiamondTrap(void);

    public:
        DiamondTrap(void);
        DiamondTrap(const std::string name);
        DiamondTrap(const DiamondTrap &dia);
        ~DiamondTrap(void);

        DiamondTrap &operator=(const DiamondTrap &dia);

        void attack(const std::string &target);
        void whoAmI(void);
};

#endif