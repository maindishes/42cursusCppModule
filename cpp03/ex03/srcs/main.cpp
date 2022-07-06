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

}
