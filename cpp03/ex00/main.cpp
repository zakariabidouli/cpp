#include "ClapTrap.hpp"

int main( void ) {
ClapTrap a( "Alice");
ClapTrap b( ClapTrap( "Bob" ) );
ClapTrap c( "Joe" );

a.attack( "Bob" );
b.takeDamage( 5 );
c.beRepaired( 5 );
return 0;
}
