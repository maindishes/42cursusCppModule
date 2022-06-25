#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>

class Bureaucrat
{
    private:
        const std::string name;
        int grade;

        static const int lowestGrade = 150;
        static const int highestGrade = 1;

        Bureaucrat(void);
        void checkGrade(void) const;
    public:
        Bureaucrat(const std::string name, const int grade);
        Bureaucrat(const Bureaucrat &rhs);
        ~Bureaucrat(void);

        Bureaucrat &operator=(const Bureaucrat &rhs); // right hand side 2번째 매개변수

        const std::string &getName() const;
        const int& getGrade() const;

        void increaseGrade(int grade);
        void decreaseGrade(int grade);

        class GradeTooHighEcxeption : public std::exception
        {
            public:
                const char* what() const throw();
        };

        class GradeTooLowEcxeption : public std::exception
        {
            public:
                const char* what() const throw();
        };
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat &rhs);

#endif