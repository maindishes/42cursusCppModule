#pragma once
#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    private:
        ScavTrap(void);   // 왜 default 생성자를 여기다 뒀지? 
    public:
        // ScavTrap(void);
        ScavTrap(const std::string name);
        ScavTrap(const ScavTrap &scav);
        ~ScavTrap(void);

        ScavTrap &operator=(const ScavTrap &scav);

        void attack(const std::string &target);
        void guardGate(void);
};

#endif