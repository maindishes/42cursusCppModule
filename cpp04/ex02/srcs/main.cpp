// #include "../incs/Animal.hpp"
#include "../incs/Cat.hpp"
#include "../incs/Dog.hpp"
#include "../incs/WrongCat.hpp"

# define NUM_OF_ANIMALS 4

int main()
{
	{
		Animal *animals[3];

		animals[0] = new Cat();
		animals[1] = new Dog();
		animals[2] = new Dog();
		// animals[2] = new Animal(); // cannot instantiate abstract class

		for (int i = 0; i < 3; i++)
		{
			std::cout << animals[i]->getType() << std::endl;
			animals[i]->makeSound();
			delete animals[i];
		}
		system("leaks ex02");
	}
	return 0;
}