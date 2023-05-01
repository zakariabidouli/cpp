#include "Aanimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
// #include "Brain.hpp"
#define COUNT 4

int main(){
	Aanimal *animals[COUNT];
	for (int i = 0; i < COUNT; i++){
		if (i % 2 == 0)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}
	for (int i = 0; i < COUNT; i++){
		animals[i]->makeSound();
		delete animals[i];
	}
}
// CPP04/ex02/main.cpp