#pragma once
#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
    private:
        ScavTrap(void);  
    public:
        
        ScavTrap(const std::string name);
        ScavTrap(const ScavTrap &scav);
        ~ScavTrap(void);

        ScavTrap &operator=(const ScavTrap &scav);

        void attack(const std::string &target);
        void guardGate(void);
};

#endif