#include "Zombie.hpp"

Zombie* newZombie(std::string name) {
    return new Zombie(name);
}

void    Zombie::announce() {
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie() {
    this->name = "default";
}

Zombie::Zombie(std::string name){
    this->name = name;
}

Zombie::~Zombie() {
    std::cout << this->name << " is dead." << std::endl;
}

