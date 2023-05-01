#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>

// abstract class no derived class can be instantiated from it

class Aanimal
{
    protected:
        std::string type;

    public:
        Aanimal();
        Aanimal(std::string s);
        Aanimal(const Aanimal& copy);
        Aanimal& operator=(const Aanimal& copy);
        virtual ~Aanimal();
        std::string getType() const;
        virtual void makeSound() const = 0;
};

#endif
