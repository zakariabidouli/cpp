#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
// #include "Brain.hpp"

#define COUNT 4

int main(){
	
// 	{
// 		std::cout << "###############" << std::endl;

// 		Animal *animals[COUNT];

// 		std::cout << "###############" << std::endl;

// 		for (size_t i = 0; i < COUNT / 2; i++)
// 			animals[i] = new Dog();
// 		for (size_t i = COUNT / 2; i < COUNT; i++)
// 			animals[i] = new Cat();
// 		for (size_t i = 0; i < COUNT; i++)
// 			delete animals[i];
// 		std::cout << "###############" << std::endl;
// 	}

// 	{
// 		const Animal *j = new Dog();
// 		const Animal *i = new Cat();
// 		std::cout << "###############" << std::endl;
// 		delete j;
// 		delete i;
// 		std::cout << "###############" << std::endl;
// 	}

// 	{
// 		Cat *cat = new Cat(); //
// 		Cat *copy = new Cat(*cat); //
// 		std::cout <<(cat->getBrain()) << std::endl;
// 		delete cat;
// 		std::cout <<(copy->getBrain()) << std::endl;
// 		std::cout << copy->getBrain() << std::endl;

// 	}
// // return 0;

// 	{
// 		Dog *dog = new Dog();
// 		Dog *copy = new Dog(*dog);
// 		std::cout << std::endl;
// 		std::cout << "dwwd" <<(dog->getBrain()) << std::endl;
// 		delete dog;
// 		std::cout << std::endl;

// 		std::cout <<  (copy->getBrain()) << std::endl;
// 	}

// 	Dog basic;
// 	{
// 		Dog tmp = basic;
// 	}
// 	std::cout << std::endl;
// 	std::cout <<(basic.getBrain()) << std::endl;

	const Cat *a_cat = new Cat();
	const Animal *cat = new Cat(*a_cat);
	const Animal *dog = new Dog();
	
	const WrongAnimal *wrongCat = new WrongCat();

	std::cout << std::endl;

	std::cout << "-Cat is     : " << cat->getType() << " " << std::endl;
	std::cout << "-Dog is     : " << dog->getType() << " " << std::endl;
	std::cout << "-WrongCat is: " << wrongCat->getType() << " " << std::endl;
	
	std::cout << std::endl;

	// whatSound(a_cat);

	std::cout << std::endl;

	cat->makeSound(); // will output the cat sound!
	dog->makeSound();
	wrongCat->makeSound(); // will output the WrongAnimal sound!
	
	std::cout << std::endl;

	return 0;

	return 0;
}