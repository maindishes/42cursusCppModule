#include "ClapTrap.hpp"

int main()
{
   	ClapTrap cl4pTP("cl4pTP");
    cl4pTP.display();
	cl4pTP.attack("Calypso Twins");
	cl4pTP.takeDamage(6);
	cl4pTP.beRepaired(4);
	cl4pTP.takeDamage(3);
	cl4pTP.beRepaired(8);
	cl4pTP.takeDamage(16);
	cl4pTP.attack("Calypso Twins");
	cl4pTP.beRepaired(1);
    cl4pTP.attack("Calypso Twins");

}
