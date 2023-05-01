#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <vector>


class Zombie {
private:
    std::string name;

public:
    Zombie();
    Zombie(std::string name);
    ~Zombie();
    void announce();    
};

Zombie* newZombie(std::string name);
Zombie* zombieHorde(int N, std::string name);

#endif
