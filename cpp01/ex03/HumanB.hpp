#pragma once
#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
    private:
        std::string _name;
        Weapon* _weapon;
    public:
        HumanB(const std::string &name);
        HumanB(const std::string &name, Weapon *weapon);
        // HumanB();
        // ~HumanB();

        void setWeapon(Weapon &weapon);

        void attack(void);

};
#endif