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
        enum { S, R, P, MAX};
    public:
        Intern(void);
        Intern(const Intern &rhs);
        ~Intern(void);

        Intern &operator=(const Intern &rhs);

        class noTypeException : public std::exception
        {
            public:
                const char *what(void) const throw();
        };

        Form *makeForm(const std::string &forName, const std::string &target) const;

        Form *createPresidential(std::string target);
        Form *createRobotomy(std::string target);
        Form *createShrubbery(std::string target);
};

#endif