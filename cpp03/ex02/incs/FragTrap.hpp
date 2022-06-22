#pragma once
#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    private:
        FragTrap(void);   // 왜 default 생성자를 여기다 뒀지? 
    public:
        // FragTrap(void);
        FragTrap(const std::string name);
        FragTrap(const FragTrap &frag);
        ~FragTrap(void);

        FragTrap &operator=(const FragTrap &frag);

    
        void highFivesGuys(void);
};

#endif