#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
    std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& copy)
{
    std::cout << "WrongCat copy constructor called" << std::endl;
    *this = copy;
}

WrongCat& WrongCat::operator=(const WrongCat& copy)
{
    std::cout << "WrongCat assignation operator called" << std::endl;
    this->type = copy.type;
    return (*this);
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called" << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << "WrongCat makes a sound : Meaw" << std::endl;
}

