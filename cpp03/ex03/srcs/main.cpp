#include "../incs/DiamondTrap.hpp"

int main()
{
	DiamondTrap d1("dia1");
	DiamondTrap d2("dia2");

	d1.display();
	d2.display();
	
	DiamondTrap d3(d1);

	d3.display();

	d1.attack("dia2");
	d1.display();
	d2.takeDamage(d1.getAd());

	d2.display();
	d2.beRepaired(10);
	d2.display();

	d2.highFivesGuys();
	d1.highFivesGuys();

	d2.whoAmI();
	d1.whoAmI();

	DiamondTrap d4 = d1;
	d4.display();
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
