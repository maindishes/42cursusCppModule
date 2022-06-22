#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string name) 
: _name(name), _hit_points(10),_energy_points(10),_attack_damage(0)
{
    std::cout << "Parameter constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &clap)
:_name(clap._name),_hit_points(clap._hit_points),
_energy_points(clap._energy_points), _attack_damage(clap._attack_damage)
{
    std::cout << "Copy constructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &clap)
{
    this->_name = clap._name;
    this->_hit_points = clap._hit_points;
    this->_energy_points = clap._energy_points;
    this->_attack_damage = clap._attack_damage;

    std::cout << "Assignement operator called" << std::endl;
    return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called" << std::endl;
}

void ClapTrap::attack(std::string const &target)
{ 
    if (this->_energy_points > 0 && this->_hit_points > 0) // 조건은 입력 받을때 unsigned 에서 걸러지는거 아닌가,,? No 과제 조건에 나와있다
    {
        std::cout << "ClapTrap " << this->_name 
        << " attacks " << target << ", causing " 
        << this->_attack_damage << " points of damage!" << std::endl; 
        this->_energy_points--;
    }
    else
    {
        std::cout << "ClapTrap " << this->_name 
        << " is out of points" << std::endl 
        << " Can't attack " << target << std::endl;
    }
    std::cout << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_hit_points < amount)
        this->_hit_points = 0;
    else
        this->_hit_points -= amount;
    // if (this->_hit_points < 0)
    //     this->_hit_points = 0;
    std::cout << "ClapTrap " << this->_name << " took "
    << amount << " points of damage " << std::endl;
    ClapTrap::display();
    if (this->_hit_points == 0 || this->_energy_points == 0)      //둘중 하나라도 없으면 아무것도 못함.
    {
        std::cout << " No Points... Can't do anything " << std::endl;
    }
    else
    {
        std::cout << "Now " << this->_name << " has only "
        << "hit points : " << this->_hit_points << " ,energy points : "
        << this->_energy_points << std::endl;
    }
    std::cout << std::endl;

}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_energy_points > 0 && this->_hit_points > 0) 
    {
        this->_hit_points += amount;
        this->_energy_points--;
        std::cout << "ClapTrap " << this->_name << " took "
        << amount << " hit points " << std::endl;
        ClapTrap::display();
        std::cout << "Now " << this->_name << " has only "
        << "hit points : " << this->_hit_points << " ,energy points : "
        << this->_energy_points << std::endl;
    }
    else
    {
        std::cout << "ClapTrap " << this->_name
        << " is out of points" << std::endl
        << " Cna't be repaired" << std::endl;
    }
    std::cout << std::endl;
}

void ClapTrap::display() const
{
    std::cout << " [ " << this->_name << " ] " << std::endl;
    std::cout << "hit points      : ";
    // for (unsigned int i =0; i < this->_hit_points; i++)
    //     std::cout << "O ";
    std::cout <<" ( " << _hit_points << " ) ";
    std::cout << std::endl;
    std::cout << "energy points   : ";
    // for (unsigned int i =0; i < this->_energy_points; i++)
    //     std::cout <<"O ";
    std::cout <<" ( " << _energy_points << " ) ";
    std::cout << std::endl;
    std::cout << std::endl;
}
unsigned int ClapTrap::getAd() const
{
    return _attack_damage;
}

void ClapTrap::changeAd(unsigned int num)
{   
    this->_attack_damage = num;
}