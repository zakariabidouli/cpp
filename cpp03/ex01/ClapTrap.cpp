#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
    std::cout << "Default constructor called" << std::endl;
    _name = "Default";
    _hitPoints = 10;
    _energyPoints = 10;
    _attackDamage = 0;
}

ClapTrap::ClapTrap(std::string name) {
    std::cout << "Name constructor called" << std::endl;
    _name = name;
    _hitPoints = 10;
    _energyPoints = 10;
    _attackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &clapTrap) {
    std::cout << "Copy constructor called" << std::endl;
    *this = clapTrap;
}

ClapTrap::~ClapTrap() {
    std::cout << "Destructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &clapTrap) {
    std::cout << "Copy assignation operator called" << std::endl;
    _name = clapTrap._name;
    _hitPoints = clapTrap._hitPoints;
    _energyPoints = clapTrap._energyPoints;
    _attackDamage = clapTrap._attackDamage;
    return *this;
}

void ClapTrap::attack(std::string const & target) {
    std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
    std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
    std::cout << "ClapTrap " << _name << " is repaired for " << amount << " points!" << std::endl;
}

std::string ClapTrap::getName() const {
    return _name;
}

int ClapTrap::getHitPoints() const {
    return _hitPoints;
}

int ClapTrap::getEnergyPoints() const {
    return _energyPoints;
}

int ClapTrap::getAttackDamage() const {
    return _attackDamage;
}

void ClapTrap::setName(std::string name) {
    _name = name;
}

void ClapTrap::setHitPoints(int hitPoints) {
    _hitPoints = hitPoints;
}

void ClapTrap::setEnergyPoints(int energyPoints) {
    _energyPoints = energyPoints;
}

void ClapTrap::setAttackDamage(int attackDamage) {
    _attackDamage = attackDamage;
}


