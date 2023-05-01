#include "ICharachter.hpp"

ICharacter::ICharacter()
{
}

ICharacter::ICharacter(ICharacter const &copy)
{
    *this = copy;
}

ICharacter::~ICharacter()
{
}

ICharacter &ICharacter::operator=(ICharacter const &copy)
{
    if (this != &copy)
    {
        this->_name = copy._name;
    }
    return (*this);
}

std::string const & ICharacter::getName() const
{
    return (this->_name);
}

void ICharacter::equip(AMateria* m)
{
    (void)m;
}

void ICharacter::unequip(int idx)
{
    (void)idx;
}

void ICharacter::use(int idx, ICharacter& target)
{
    (void)idx;
    (void)target;
}
