#include "../incs/DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
    std::cout << "DiamondTrap Default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string name) 
: ClapTrap(name), FragTrap(name), ScavTrap(name)
{
    ClapTrap::_name = name + "_clap_name";
    this->_name = name;
    this->_hit_points = FragTrap::_hit_points;
    this->_energy_points = ScavTrap::_energy_points;
    this->_attack_damage = FragTrap::_attack_damage;
    std::cout << "DiamondTrap Parameter constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &dia) 
: ClapTrap(dia), FragTrap(dia), ScavTrap(dia)
{
    std::cout << "DiamondTrap Copy constructor called" << std::endl;
}

 DiamondTrap &DiamondTrap::operator=(const DiamondTrap &dia)
{
    this->_name = dia._name;
    this->_hit_points = dia._hit_points;
    this->_energy_points = dia._energy_points;
    this->_attack_damage = dia._attack_damage;

    std::cout << "ScavTrap Assignement operator called" << std::endl;
    return *this;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Destructor called" << std::endl;
}

void ScavTrap::attack(std::string const &target)
{ 
    if (this->_energy_points > 0 && this->_hit_points > 0) // 조건은 입력 받을때 unsigned 에서 걸러지는거 아닌가,,? No 과제 조건에 나와있다
    {
        std::cout << "ScavTrap " << this->_name 
                  << " attacks " << target << ", causing " 
                  << this->_attack_damage << " points of damage!" << std::endl; 
        this->_energy_points--;
    }
    else
    {
        std::cout << "ScavTrap " << this->_name 
                  << " is out of points" << std::endl 
                  << " Can't attack " << target << std::endl;
    }
    std::cout << std::endl;
}

void ScavTrap::guardGate(void)
{
    std::cout << " ########################################### " << std::endl
              << " ScavTrap " << this->_name 
              << "  is now in Gatekeeper mode. " << std::endl
              << " ########################################### " << std::endl
              << std::endl; 
}
