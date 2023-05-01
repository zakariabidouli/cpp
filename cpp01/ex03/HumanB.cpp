#include   "HumanB.hpp"
#include  "Weapon.hpp"

void HumanB::attack() {
    if (this->weapon)
        std::cout << this->name << " attacks with his " << weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon& newweapon) {
    this->weapon = &newweapon;
}

HumanB::HumanB(std::string name) : name(name) , weapon(nullptr){}   

HumanB::~HumanB() {}
