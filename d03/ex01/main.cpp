#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int		main() {

	srand(time(0));
	FragTrap bob("SUPER BOT");
	ScavTrap jim("ALTA");

	bob.takeDamage(25);
	bob.takeDamage(30);
	bob.takeDamage(30);
	bob.beRepaired(20);
	bob.takeDamage(30);
	bob.takeDamage(30);
	bob.set_maxhitp();
	bob.takeDamage(90);
	for (int i = 0; i < 5; i++)
		bob.vaulthunter_dot_exe("Bad Boy");
	bob.set_energyhitp(100);
	for (int i = 0; i < 5; i++)
		bob.vaulthunter_dot_exe("Snake");
	for (int i = 0; i < 3; i++) {
		jim.challengeNewcomer("ROBBY");
		jim.challengeNewcomer("ABBY");
		jim.challengeNewcomer("TOM");
	}
	return (0);
}