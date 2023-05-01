#include "AMateria.hpp"

AMateria::AMateria() : _type("default"), _xp(0)
{
}

AMateria::AMateria(std::string const & type) : _type(type), _xp(0)
{
}

AMateria::AMateria(AMateria const &copy)
{
    *this = copy;
}

AMateria::~AMateria()
{
}

AMateria &AMateria::operator=(AMateria const &copy)
{
    if (this != &copy)
    {
        this->_type = copy._type;
        this->_xp = copy._xp;
    }
    return (*this);
}

std::string const & AMateria::getType() const
{
    return (this->_type);
}

unsigned int AMateria::getXP() const
{
    return (this->_xp);
}

void AMateria::use(ICharacter& target)
{
    (void)target;
    this->_xp += 10;
}
