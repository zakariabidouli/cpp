#include "Cat.hpp"

Cat::Cat() : Aanimal("Cat"), brain(new Brain)
{
    std::cout << "Cat default constructor called" << std::endl;
    // this->brain = new Brain();
}

Cat::Cat(const Cat& copy): Aanimal(copy), brain(new Brain(*copy.brain))
{
    std::cout << "Cat copy constructor called" << std::endl;
    *this = copy;
}

Cat& Cat::operator=(const Cat& copy)
{
    std::cout << "Cat assignation operator called" << std::endl;
    this->type = copy.type;
    return (*this);
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Cat makes a sound : Meaw" << std::endl;
}

const Brain Cat::getBrain() const
{
    return *brain;
}

