#include   "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : name(name), weapon(weapon) {}

HumanA::~HumanA() {}

void HumanA::attack() {
    if (this->weapon)
        std::cout << name << " attacks with his " << weapon.getType() << std::endl;
}