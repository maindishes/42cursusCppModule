#include "../incs/DiamondTrap.hpp"

// DiamondTrap::DiamondTrap()
// {
//     std::cout << "DiamondTrap Default constructor called" << std::endl;
// }

DiamondTrap::DiamondTrap(const std::string name) 
: ClapTrap(name), ScavTrap(name), FragTrap(name)
{
    ClapTrap::_name = name + "_clap_name";
    this->_name = name;
    // this->_hit_points = FragTrap::_hit_points;
    // this->_energy_points = ScavTrap::_energy_points;
    // this->_attack_damage = FragTrap::_attack_damage;
    this->_hit_points = 100;
    this->_energy_points = 50;
    this->_attack_damage = 30;
    std::cout << "DiamondTrap Parameter constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &dia) 
: ClapTrap(dia),ScavTrap(dia), FragTrap(dia)
{
    std::cout << "DiamondTrap Copy constructor called" << std::endl;
}

 DiamondTrap &DiamondTrap::operator=(const DiamondTrap &dia)
{
     //ClapTrap::operator=(dia);
    this->_name = dia._name;
    this->_hit_points = dia._hit_points;
    this->_energy_points = dia._energy_points;
    this->_attack_damage = dia._attack_damage;

    std::cout << "DiamondTrap Assignement operator called" << std::endl;
    return *this;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap Destructor called" << std::endl;
}

void DiamondTrap::attack(std::string const &target)
{ 
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI(void)
{
    std::cout << "DiamondTrap I am " << this->_name << std::endl
              << "And my ClapTrap name is " << ClapTrap::_name << std::endl
              << std::endl;
}
