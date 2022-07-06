#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(const std::string name) 
: ClapTrap(name) 
{
    this->_hit_points = 100;
    this->_energy_points = 50;
    this->_attack_damage = 20;
    std::cout << "ScavTrap Parameter constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &scav) : ClapTrap(scav) // ~
{
    //(*this) = scav;        // ScavTrap 에만 있는걸 넣어주기 위해 근데 여기선 필요 없음 
    std::cout << "ScavTrap Copy constructor called" << std::endl;
}

 ScavTrap &ScavTrap::operator=(const ScavTrap &scav)
{
    //ClapTrap::operator=(scav); // 이렇게 하면 아래 하나하나 넣어줄 필요없이 한번에 가능
    this->_name = scav._name;
    this->_hit_points = scav._hit_points;
    this->_energy_points = scav._energy_points;
    this->_attack_damage = scav._attack_damage;

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
