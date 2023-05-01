#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
}

Cure::Cure(Cure const &copy)
{
    *this = copy;
}

Cure::~Cure()
{
}

Cure &Cure::operator=(Cure const &copy)
{
    if (this != &copy)
    {
        this->_type = copy._type;
        this->_xp = copy._xp;
    }
    return (*this);
}

AMateria* Cure::clone() const
{
    return (new Cure(*this));
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
    this->_xp += 10;
}

