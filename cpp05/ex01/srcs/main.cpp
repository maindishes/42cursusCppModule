#include "../incs/Bureaucrat.hpp"


int main()
{
    try
	{
		Bureaucrat b1("b1", 30);
		Form f1("f1", 50, 70);
		Form f2("f2", 10, 50);
		Form f3(f1);
		Form f4 = f2;

		b1.signForm(f1);
		b1.signForm(f2);
		std::cout << std::endl;

		std::cout << f1 << std::endl;
		std::cout << std::endl;
		std::cout << f2 << std::endl;
		std::cout << std::endl;
		std::cout << f3 << std::endl;
		std::cout << std::endl;
		std::cout << f4 << std::endl;
		std::cout << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
    std::cout <<"---------------------" << std::endl;
    try
	{
		Form f("Form", 1, 0);

		std::cout << f << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		Bureaucrat mark = Bureaucrat("Mark", 1);
		Form f("Form", 150, 150);

		std::cout << mark << std::endl;
		std::cout << f << std::endl;
		mark.signForm(f);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		Bureaucrat peter = Bureaucrat("Peter", 10);
		Form f("Form", 1, 1);

		std::cout << peter << std::endl;
		std::cout << f << std::endl;
		peter.signForm(f);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

    system("leaks ex01");
    return 0;
}
