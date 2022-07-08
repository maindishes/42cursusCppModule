#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>

# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    private:
        static const int higestGrade = 1;
        static const int lowestGrade = 150;

        const std::string name;
        bool isSigned;
        const int gradeToSign;
        const int gradeToExecute;

        Form(void);
        void checkGrade(void) const;

    public:
        Form(const std::string name, const int gradeToSign, const int gradeToExcute);
        Form(const Form &rhs);
        virtual ~Form(void);

        Form &operator=(const Form &rhs);

        const std::string &getName(void) const;
        bool getIsSigned(void) const;
        int getGradeToSign(void) const;
        int getGradeToExecute(void) const;
        void beSigned(const Bureaucrat &rhs);

        virtual void execute(const Bureaucrat &executor) const = 0;
        
        class GradeTooHighException : public std::exception
        {
            public:
                const char *what(void) const throw();
        };
        
        class GradeTooLowException : public std::exception
        {
            public:
                const char *what(void) const throw();
        };

        class CantExecuteForm : public std::exception
        {
            public:
                const char *what(void) const throw();
        };
};
std::ostream& operator<<(std::ostream& out, const Form &rhs);

#endif