#include "Character.hpp"

Character::Character()
{
}

Character::Character(std::string const &name) : _name(name)
{
    for (int i = 0; i < 4; i++)
        this->_inventory[i] = NULL;
}

Character::Character(Character const &copy)
{
    *this = copy;
}

Character::~Character()
{
    for (int i = 0; i < 4; i++)
        delete this->_inventory[i];
}

Character &Character::operator=(Character const &copy)
{
    if (this != &copy)
    {
        this->_name = copy._name;
        for (int i = 0; i < 4; i++)
            this->_inventory[i] = copy._inventory[i];
    }
    return (*this);
}

std::string const & Character::getName() const
{
    return (this->_name);
}

void Character::equip(AMateria* m)
{
    if (this->_count < 4)
    {
        this->_inventory[this->_count] = m;
        this->_count++;
    }
}

void Character::unequip(int idx)
{
    if (idx >= 0 && idx < 4)
    {
        this->_inventory[idx] = NULL;
        this->_count--;
    }
}

void Character::use(int idx, ICharacter& target)
{
    if (idx >= 0 && idx < 4)
        this->_inventory[idx]->use(target);
}

