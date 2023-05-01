#include "Brain.hpp"

Brain::Brain() {
    std::cout << "Brain default constructor called" << std::endl;
    for (int i = 0; i < 100; i++) {
        this->ideas[i] = "123";
    }
}

Brain::Brain(const Brain &copy) {
    std::cout << "Brain copy constructor called" << std::endl;
    for (int i = 0; i < 100; i++) {
        this->ideas[i] = copy.ideas[i];
    }
}

Brain::~Brain() {
    std::cout << "Brain destructor called" << std::endl;
}

Brain &Brain::operator=(const Brain &assign) {
    std::cout << "Brain assignation operator called" << std::endl;
    if (this != &assign) {
        for (int i = 0; i < 100; i++) {
            this->ideas[i] = assign.ideas[i];
        }
    }
    return *this;
}

std::ostream &operator<<(std::ostream &out, const Brain &brain) {
    for (int i = 0; i < 100; i++) {
        out << brain.getIdea(i) << std::endl;
    }
    return out;
}

std::string Brain::getIdea(int index) const {
    if (index >= 0 && index < 100)
        return this->ideas[index];
    return "";
}

void Brain::setIdea(int index, std::string idea) {
    if (index >= 0 && index < 100)
        this->ideas[index] = idea;
}




