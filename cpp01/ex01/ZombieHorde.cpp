#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name){
    if(N <= 0){
        std::cout << "Enter a positive number" << std::endl;
        return NULL;
    }
    Zombie* zombies = new Zombie[N];
  
    for (int i = 0; i < N; i++){
        zombies[i] = Zombie(name);
    }
    return zombies;
}
