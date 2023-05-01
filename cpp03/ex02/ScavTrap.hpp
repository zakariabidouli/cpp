#ifndef SCARVTRAP_HPP
# define SCARVTRAP_HPP

# include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap& src);
        ~ScavTrap();

        ScavTrap&	operator=(const ScavTrap& rhs);

        void		guardGate();
};

#endif