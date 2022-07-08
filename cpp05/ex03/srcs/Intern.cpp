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

const char *Intern::noTypeException::what() const throw()
{
    return ("No Match Type!");
}
Form *Intern::createPresidential(std::string target) {
	std::cout << "Intern creates presidential pardon form" << std::endl;
	Form *temp = new PresidentialPardonForm(target);
	return temp;
}

Form *Intern::createRobotomy(std::string target) {
	std::cout << "Intern creates robotomy request form" << std::endl;
	Form *temp = new RobotomyRequestForm(target);
	return temp;
}

Form *Intern::createShrubbery(std::string target) {
	std::cout << "Intern creates shrubbery creation form" << std::endl;
	Form *temp = new ShrubberyCreationForm(target);
	return temp;
}
Form *Intern::makeForm(const std::string &forName, const std::string &target) const
{
    // t_formList forms[] ={
    //     {"presiential pardon", new PresidentialPardonForm(target)},
    //     {"robotomy request", new RobotomyRequestForm(target)},
    //     {"shrubbery creation", new ShrubberyCreationForm(target)},
    //     {"",NULL}
    //     };

    std::string forms[Intern::MAX] = {"presiential pardon","robotomy request","shrubbery creation"};
    try
    {
        int i;
        for (i=0; i< Intern::MAX; i++)
        {
            if (forms[i] == forName)
                break;
        }
        // std::cout << "TEST : -------: "<<i << std::endl;
        Form *resultForm;
        switch (i)
        {
            case Intern::S:
                return (new ShrubberyCreationForm(target));
                
            case Intern::R:
                resultForm = new RobotomyRequestForm(target);
                // std::cout << "RTEST ====" << std::endl;
                break;
            case Intern::P:
                resultForm = new PresidentialPardonForm(target);
                break;

    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    int i;
    for (i=0; i< Intern::MAX; i++)
    {
        if (forms[i] == forName)
            break;
    }
    // std::cout << "TEST : -------: "<<i << std::endl;
    Form *resultForm;
    switch (i)
    {
        case Intern::S:
            resultForm = new ShrubberyCreationForm(target);
            break;
        case Intern::R:
            resultForm = new RobotomyRequestForm(target);
            // std::cout << "RTEST ====" << std::endl;
            break;
        case Intern::P:
            resultForm = new PresidentialPardonForm(target);
            break;
        default:
            throw noTypeException();
            break;
    }
    std::cout << "Intern creates " << forName << std::endl;
    return resultForm;

}
	Form *(Intern::*func[3])(std::string) = {&Intern::createPresidential, &Intern::createRobotomy, &Intern::createShrubbery};	
	for (int i = 0 ; i < 3 ; i++) {
		if (form_name[i] == name) {
			return (this->*func[i])(target);
		}
	}