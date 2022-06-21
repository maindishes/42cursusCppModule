#include "ClapTrap.hpp"

int main()
{
   	ClapTrap c1("clap1");
	ClapTrap c2("clap2");

    c1.display();
	c2.display();

	c1.changeAd(1);
	c1.attack("clap2");
	c1.display();
	c2.takeDamage(c1.getAd());
	c2.beRepaired(1);
	c2.display();
	c1.takeDamage(3);
	c1.beRepaired(8);
	c1.takeDamage(16);
	c1.attack("Calypso Twins");
	c1.beRepaired(1);
    c1.attack("Calypso Twins");

}
