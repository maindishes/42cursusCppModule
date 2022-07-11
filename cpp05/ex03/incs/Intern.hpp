#ifndef INTERN_HPP
#define INTERN_HPP

#include "../incs/PresidentialPardonForm.hpp"
#include "../incs/ShrubberyCreationForm.hpp"
#include "../incs/RobotomyRequestForm.hpp"

class Intern
{
    private:
        // typedef struct s_formList
        // {
        //     std::string forName;
        //     Form *fromType;
        // } t_formList;
        
    public:
        Intern(void);
        Intern(const Intern &rhs);
        ~Intern(void);

        Intern &operator=(const Intern &rhs);

        Form *makeForm(const std::string &forName, const std::string &target);

        // Solve 1 함수포인터 때 필요       
        Form *createPresidential(const std::string target);
        Form *createRobotomy(const std::string target);
        Form *createShrubbery(const std::string target);
};

#endif