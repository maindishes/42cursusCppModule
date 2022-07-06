// #include "../incs/Animal.hpp"
#include "../incs/Cat.hpp"
#include "../incs/Dog.hpp"
#include "../incs/WrongCat.hpp"
int main()
{
 	std::cout << "-------------Animal Test-------------" << std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	
	Animal A;
	Cat B;
	// Cat C;
	Cat C(B);
	// C = B;

	std::cout << std::endl;
	std::cout << "Type : " << meta->getType() << std::endl;
	std::cout << "Type : " << j->getType() << std::endl;
	std::cout << "Type : " << i->getType() << std::endl;

	std::cout << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();

	std::cout << std::endl;
	delete meta;
	delete j;
	delete i;
	
	std::cout << std::endl;
	std::cout << "-----------WrongAnimal Test-----------" << std::endl;
	const WrongAnimal* wa = new WrongAnimal();
	const WrongAnimal* wc = new WrongCat();

	std::cout << std::endl;
	std::cout << "Type : " << wa->getType() << std::endl;
	std::cout << "Type : " << wc->getType() << std::endl;

	std::cout << std::endl;
	wa->makeSound();
	wc->makeSound();

	std::cout << std::endl;
	delete wa;
	delete wc;
	return 0;
}