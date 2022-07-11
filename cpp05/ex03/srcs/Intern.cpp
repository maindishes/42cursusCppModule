#include "../incs/Intern.hpp"

#include <iostream>
#include <string>

Intern::Intern(void)
{
}

Intern::Intern(const Intern &rhs)
{
    *this = rhs;
}

Intern::~Intern(void)
{
}

Intern &Intern::operator=(const Intern &rhs)
{
    (void)rhs;
    return (*this);
}

/**
 *      Solve 1 함수 pointer
 **/

Form *Intern::createPresidential(std::string target)
{
	std::cout << "Intern creates presidential pardon form" << std::endl;
	Form *temp = new PresidentialPardonForm(target);
	return temp;
}

Form *Intern::createRobotomy(std::string target)
{
	std::cout << "Intern creates robotomy request form" << std::endl;
	Form *temp = new RobotomyRequestForm(target);
	return temp;
}

Form *Intern::createShrubbery(std::string target)
{
	std::cout << "Intern creates shrubbery creation form" << std::endl;
	Form *temp = new ShrubberyCreationForm(target);
	return temp;
}

 Form *Intern::makeForm(const std::string &forName, const std::string &target)
 {
	std::string form_name[] = {"presidential pardon", "robotomy request", "shrubbery creation"};
	Form *(Intern::*func[3])(std::string) = {&Intern::createPresidential, &Intern::createRobotomy, &Intern::createShrubbery};	
	for (int i = 0 ; i < 3 ; i++) {
		if (form_name[i] == forName) 
        {
			return (this->*func[i])(target);
		}
	}
	std::cout << "Intern coudln't find the form "  << std::endl;
	return (NULL);
}

/**
 *      Solve 2 클래스안 구조체로 함수가르키는 포인터 저장.
 **/

// Form *Intern::makeForm(const std::string &forName, const std::string &target)
// {
//    t_formList forms[] = 
//    {
// 		{"presidential pardon", new PresidentialPardonForm(target)},
// 		{"robotomy request", new RobotomyRequestForm(target)},
// 		{"shrubbery creation", new ShrubberyCreationForm(target)},
// 		{"", NULL}
//     };

// 	Form *resultForm = NULL;
// 	for (int i = 0; forms[i].fromType != NULL; i++)
// 	{
// 		if (forms[i].forName == forName)
// 			resultForm = forms[i].fromType;
// 		else
// 			delete forms[i].fromType;
// 	}
// 	if (resultForm == NULL)
// 		std::cout << "Intern coudln't find the form " << forName << std::endl;
// 	else
// 		std::cout << "Intern creates " << forName << std::endl;
// 	return resultForm;
// }
