#include "../incs/Bureaucrat.hpp"


int main()
{
	try
	{
		Bureaucrat junyopar = Bureaucrat("junyopar", 0);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	try
	{
		Bureaucrat junyopar = Bureaucrat("junyopar", 10);
		std::cout << junyopar << std::endl;
		junyopar.incrementGrade(9);
		std::cout << junyopar << std::endl;
		junyopar.decrementGrade(149);
		std::cout << junyopar << std::endl;
		junyopar.decrementGrade(100);
		std::cout << junyopar << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	try
	{
		Bureaucrat junyopar = Bureaucrat("junyopar", 150);
		Bureaucrat test = Bureaucrat("test", 10);
		test = junyopar;
		std::cout << test << std::endl;
		test.incrementGrade(100);
		std::cout << test << std::endl;
		test.incrementGrade(100);
		std::cout << test << std::endl;
		test.incrementGrade(100);
		std::cout << test << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	system("leaks ex00");
}
