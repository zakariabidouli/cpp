#ifndef DOG_HPP
#define DOG_HPP

#include "Aanimal.hpp"
#include "Brain.hpp"

class Dog : public Aanimal
{
    public:
        Dog();
        Dog(const Dog& copy);
        Dog& operator=(const Dog& copy);
        virtual ~Dog();
        virtual void makeSound() const;

        const Brain  getBrain() const;

    private:
        Brain *brain;
};


#endif
