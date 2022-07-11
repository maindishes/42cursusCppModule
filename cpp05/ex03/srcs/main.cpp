#include "../incs/Bureaucrat.hpp"
// #include "Bureaucrat.hpp"
// #include "../incs/Form.hpp"
#include "../incs/ShrubberyCreationForm.hpp"
#include "../incs/RobotomyRequestForm.hpp"
#include "../incs/PresidentialPardonForm.hpp"
#include "../incs/Intern.hpp"
#include "../incs/Color.hpp"

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

	system("leaks ex03");
}