#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main( void ) {

    ScavTrap scavTrap("Sca");
    scavTrap.attack("Target");
    scavTrap.takeDamage(10);
    scavTrap.beRepaired(10);
    scavTrap.guardGate();



return 0;
}
