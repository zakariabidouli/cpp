#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
}

Ice::Ice(Ice const &copy)
{
    *this = copy;
}

Ice::~Ice()
{
}

Ice &Ice::operator=(Ice const &copy)
{
    if (this != &copy)
    {
        this->_type = copy._type;
        this->_xp = copy._xp;
    }
    return (*this);
}

AMateria* Ice::clone() const
{
    return (new Ice(*this));
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
    this->_xp += 10;
}
