#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
    protected:
        std::string	_type;
        unsigned int _xp;
    public:
        AMateria();
        AMateria(std::string const & type);
        AMateria(AMateria const &copy);
        virtual ~AMateria();

        AMateria &operator=(AMateria const &copy);

        std::string const & getType() const;
        unsigned int getXP() const;


        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};


#endif
