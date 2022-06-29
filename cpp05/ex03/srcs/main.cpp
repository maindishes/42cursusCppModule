#include "../incs/Bureaucrat.hpp"
// #include "Bureaucrat.hpp"
// #include "../incs/Form.hpp"
#include "../incs/ShrubberyCreationForm.hpp"
#include "../incs/RobotomyRequestForm.hpp"
#include "../incs/PresidentialPardonForm.hpp"
#include "../incs/Intern.hpp"
#include "../incs/Color.hpp"

int main(void)
{
    Intern mom;

    Bureaucrat b("bbb", 1);
    std::cout << std::endl;

    std::cout << "=== robotomy ===" << std::endl;
    Form *x = mom.makeForm("robotomy request", "Bender");
    b.executeForm(*x);
    b.signForm(*x);
    b.executeForm(*x);
    delete x;
    std::cout << std::endl;


    std::cout << "=== shrubbery ===" << std::endl;    
    Form *y = mom.makeForm("shrubbery creation", "Bender");
    b.executeForm(*y);
    b.signForm(*y);
    b.executeForm(*y);
    delete y;
    std::cout << std::endl;

    std::cout << "=== presidential ===" << std::endl;    
    Form *z = mom.makeForm("presiential pardon", "Bender");
    b.executeForm(*z);
    b.signForm(*z);
    b.executeForm(*z);
    delete z;
    std::cout << std::endl;

    try
    {
        std::cout << "=== error ===" << std::endl;    
        Form *rrf = mom.makeForm("raaat", "Bender");
        b.executeForm(*rrf);
        b.signForm(*rrf);
        b.executeForm(*rrf);
        std::cout << std::endl;
    }
    catch(std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    system("leaks ex03");
}
