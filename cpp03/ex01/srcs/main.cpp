#include "ScavTrap.hpp"

int main()
{
   	ClapTrap c1("clap1");
	ClapTrap c2("clap2");

    c1.display();
	c2.display();

	ScavTrap s1("scav1");
	ScavTrap s2("scav2");

	s1.display();
	s2.display();
	
	ScavTrap s3(s1);

	s3.display();

	s1.attack("scav2");
	s1.display();
	s2.takeDamage(s1.getAd());

	s2.display();
	s2.beRepaired(10);
	s2.display();

	s2.guardGate();
	s1.guardGate();

	ScavTrap s4 = s1;
	s4.display();
	// c1.changeAd(1);
	// c1.attack("clap2");
	// c1.display();
	// c2.takeDamage(c1.getAd());
	// c2.beRepaired(1);
	// c2.display();
	// c1.takeDamage(3);
	// c1.beRepaired(8);
	// c1.takeDamage(16);
	// c1.attack("Calypso Twins");
	// c1.beRepaired(1);
    // c1.attack("Calypso Twins");

}
