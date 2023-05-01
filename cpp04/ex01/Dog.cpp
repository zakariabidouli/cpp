#include "Dog.hpp"

Dog::Dog() : Animal("Dog"), brain(new Brain)
{
    std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog& copy) : Animal(copy), brain(new Brain(*copy.brain))
{
    std::cout << "Dog copy constructor called" << std::endl;
    *this = copy;
}

Dog& Dog::operator=(const Dog& copy){
    std::cout << "Dog assignation operator called" << std::endl;
    this->type = copy.type;
    return (*this);
}

Dog::~Dog(){
    std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const{
    std::cout << "Dog makes a sound : Woof" << std::endl;
}


const Brain Dog::getBrain() const{
    return *brain;
}


