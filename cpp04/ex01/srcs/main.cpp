// #include "../incs/Animal.hpp"
#include "../incs/Cat.hpp"
#include "../incs/Dog.hpp"

int main()
{
	// Animal *animals[10];
	
	// for (int i =0; i < 10; i++)
	// {
	// 	if (i%2 != 0)
	// 		animals[i] = new Cat();
	// 	else
	// 		animals[i] = new Dog();
	// 	std::cout << i << ":" << animals[i]->getType() << std::endl;
	// }
	// *animals[1] = *animals[0];

	std::cout << "-------------Brain Test-------------" << std::endl;
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << std::endl;
	delete j;
	delete i;

	std::cout << std::endl;

	std::cout << "-------------Array Test-------------" << std::endl;
	const Animal* animal[10];
	for (int i = 0; i < 10; i++)
	{
		std::cout << std::endl;
		std::cout << "i : " << i << std::endl;
		if (i % 2)
			animal[i] = new Cat();
		else
			animal[i] = new Dog();
	}
	std::cout << "-----------"<< std::endl;
	
	for (int i = 0; i < 10; i++)
	{
		std::cout << "i : " << i << std::endl;
		delete animal[i];
		std::cout << std::endl;
	}

	std::cout << "------------Casting Test------------" << std::endl;
	const Animal* c1 = new Dog();
	const Animal* c2 = new Dog(*dynamic_cast<Dog const *>(c1));
	std::cout << std::endl;
	delete c1;
	delete c2;

	std::cout << std::endl;
	
	std::cout << "-----------Deep copy Test-----------" << std::endl;
	Dog d1;
	Dog d2 = d1;
	Dog d3;
	d1.getBrain()->setIdea(0, "idea 99");
	d2.getBrain()->setIdea(0, "idea test");
	d3 = d1;

	std::cout << std::endl;

	for (int index = 0; index < 100; index++)
		std::cout << d1.getBrain()->getIdea(index) << " ";

	std::cout << std::endl << std::endl;

	for (int index = 0; index < 100; index++)
		std::cout << d2.getBrain()->getIdea(index) << " ";
	std::cout << std::endl << std::endl;
	system("leaks ex01");
	return(0);
}