#include "Aanimal.hpp"

Aanimal::Aanimal() : type("Aanimal")
{
    std::cout << "Aanimal default constructor called" << std::endl;
}

Aanimal::Aanimal(std::string s) : type(s)
{
    std::cout << "Aanimal string constructor called" << std::endl;
}

Aanimal::Aanimal(const Aanimal& copy)
{
    std::cout << "Aanimal copy constructor called" << std::endl;
    *this = copy;
}

Aanimal& Aanimal::operator=(const Aanimal& copy)
{
    std::cout << "Aanimal assignation operator called" << std::endl;
    if (this != &copy)
        this->type = copy.type;
    return (*this);
}

Aanimal::~Aanimal()
{
    std::cout << "Aanimal destructor called" << std::endl;
}

std::string Aanimal::getType() const
{
    return (this->type);
}

void Aanimal::makeSound() const
{
    std::cout << "Aanimal makeSound called" << std::endl;
}
