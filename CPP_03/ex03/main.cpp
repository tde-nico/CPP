#include "DiamondTrap.hpp"

int	main() {
	DiamondTrap diamond("diamond");
	diamond.attack("Handsome Jack");
	diamond.takeDamage(6);
	diamond.beRepaired(4);
	diamond.takeDamage(3);
	diamond.guardGate();
	diamond.highFivesGuys();
	diamond.whoAmI();
	diamond.beRepaired(8);
	diamond.takeDamage(17);
	std::cout << "----------------------------------------\n";
	FragTrap frag("frag");
	frag.attack("Handsome Jack");
	frag.takeDamage(6);
	frag.beRepaired(4);
	frag.takeDamage(3);
	frag.highFivesGuys();
	frag.beRepaired(8);
	frag.takeDamage(17);
	std::cout << "----------------------------------------\n";
	ScavTrap scav("scav");
	scav.attack("Handsome Jack");
	scav.takeDamage(6);
	scav.beRepaired(4);
	scav.takeDamage(3);
	scav.guardGate();
	scav.beRepaired(8);
	scav.takeDamage(17);
	std::cout << "----------------------------------------\n";
	ClapTrap clap("clap");
	clap.attack("Handsome Jack");
	clap.takeDamage(6);
	clap.beRepaired(4);
	clap.takeDamage(3);
	clap.beRepaired(8);
	clap.takeDamage(17);
}