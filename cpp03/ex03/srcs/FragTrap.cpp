#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "FragTrap Default constructor called" << std::endl;
}

FragTrap::FragTrap(const std::string name) 
: ClapTrap(name)
{
    this->_hit_points = 100;
    this->_energy_points = 100;
    this->_attack_damage = 30;
    std::cout << "FragTrap Parameter constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &frag) : ClapTrap(frag) // ~
{
    std::cout << "FragTrap Copy constructor called" << std::endl;
}

 FragTrap &FragTrap::operator=(const FragTrap &scav)
{
     //ClapTrap::operator=(scav);
    this->_name = scav._name;
    this->_hit_points = scav._hit_points;
    this->_energy_points = scav._energy_points;
    this->_attack_damage = scav._attack_damage;

    std::cout << "FragTrap Assignement operator called" << std::endl;
    return *this;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap Destructor called" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->_name << " requests highfives" << std::endl
			  << "Hey guys! Give me a highfive!🖐" << std::endl
			  << std::endl;
}