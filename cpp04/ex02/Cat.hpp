#ifndef CAT_HPP
#define CAT_HPP

#include "Aanimal.hpp"
#include "Brain.hpp"

class Cat : public Aanimal
{
    public:
        Cat();
        Cat(const Cat& copy);
        Cat& operator=(const Cat& copy);
        virtual ~Cat();
        virtual void makeSound() const;

        const Brain getBrain() const;

    private:
        Brain *brain;
};

#endif
