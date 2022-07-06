#pragma once
#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    private:
        FragTrap(void); 
    public:
        
        FragTrap(const std::string name);
        FragTrap(const FragTrap &frag);
        ~FragTrap(void);

        FragTrap &operator=(const FragTrap &frag);

        void highFivesGuys(void);
};

#endif