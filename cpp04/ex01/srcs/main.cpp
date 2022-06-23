// #include "../incs/Animal.hpp"
#include "../incs/Cat.hpp"
#include "../incs/Dog.hpp"
#include "../incs/WrongCat.hpp"
#
int main()
{
	Animal *animals[10];
	for (int i =0; i < 10; i++)
	{
		if (i%2 != 0)
			animals[i] = new Cat();
		else
			animals[i] = new Dog();
		std::cout << i << ":" << animals[i]->getType() << std::endl;
	}
	*animals[1] = *animals[0];
}