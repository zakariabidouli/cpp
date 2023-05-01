#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : _index(0)
{
}

MateriaSource::MateriaSource(MateriaSource const &copy)
{
    *this = copy;
}

MateriaSource::~MateriaSource()
{
}

void MateriaSource::learnMateria(AMateria* m)
{
    if (m)
        this->_materia[this->_index++] = m;
}


AMateria* MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_materia[i]->getType() == type)
            return (this->_materia[i]->clone());
    }
    return (0);
}
