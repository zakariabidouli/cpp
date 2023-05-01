#include "Zombie.hpp"

Zombie* newZombie(std::string name) {
    return new Zombie(name);
}

Zombie::Zombie(std::string name){
    this->name = name;
}

Zombie::~Zombie() {
    std::cout << this->name << " is dead." << std::endl;
}

void Zombie::announce(void) {
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

