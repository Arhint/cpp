#include "FragTrap.hpp"

int		main() {

	srand(time(0));
	FragTrap bob("SUPER BOT");

	bob.takeDamage(25);
	bob.takeDamage(30);
	bob.takeDamage(30);
	bob.beRepaired(20);
	bob.rangedAttack("FILL");
	bob.meleeAttack("Amy");
	bob.set_energyhitp(90);
	bob.takeDamage(30);
	bob.set_maxhitp();
	bob.takeDamage(90);
	for (int i = 0; i < 5; i++)
		bob.vaulthunter_dot_exe("Bad Boy");
	bob.set_maxenergyhitp();
	for (int i = 0; i < 5; i++)
		bob.vaulthunter_dot_exe("Snake");
	return (0);
}