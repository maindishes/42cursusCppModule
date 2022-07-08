#include "../incs/Bureaucrat.hpp"
// #include "Bureaucrat.hpp"
// #include "../incs/Form.hpp"
#include "../incs/ShrubberyCreationForm.hpp"
#include "../incs/RobotomyRequestForm.hpp"
#include "../incs/PresidentialPardonForm.hpp"
#include "../incs/Intern.hpp"
#include "../incs/Color.hpp"


// int main(void) {
// 	{
// 		std::cout << "==========test1==========" << std::endl;
// 		Intern  someRandomIntern;
//     	Form	*rrf;
// 		rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
// 		delete rrf;
// 	}
// 	{
// 		std::cout << "==========test2==========" << std::endl;
// 		Intern  someRandomIntern;
//     	Form	*rrf;
// 		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
// 		delete rrf;
// 	}
// 	{
// 		std::cout << "==========test3==========" << std::endl;
// 		Intern  someRandomIntern;
//     	Form	*rrf;
// 		rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
// 		delete rrf;
// 	}
// 	{
// 		std::cout << "==========test4==========" << std::endl;
// 		Intern  someRandomIntern;
//     	Form	*rrf;
// 		rrf = someRandomIntern.makeForm("undefined", "Bender");
// 		delete rrf;
// 	}
// 	return (0);
// }

int main()
{
	Intern intern;
	Bureaucrat andy("Andy", 10);
	Form *form = NULL;

	form = intern.makeForm("asfasdfsad", "some target");
	delete(form);

	form = intern.makeForm("presidential pardon", "Peter");
	delete(form);

	form = intern.makeForm("robotomy request", "Marvin");
	delete(form);

	form = intern.makeForm("shrubbery creation", "home");
	andy.signForm(*form);
	andy.executeForm(*form);
	delete(form);

	// system("leaks intern");
}