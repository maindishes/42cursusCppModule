#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>

class Bureaucrat
{
    private:
        static const int lowestGrade = 150;
        static const int highestGrade = 1;

        const std::string name;
        int grade;

        void checkGrade(void) const;
        
    public:
        Bureaucrat(void);
        Bureaucrat(const std::string name, const int grade);
        Bureaucrat(const Bureaucrat &rhs);
        ~Bureaucrat(void);

        Bureaucrat &operator=(const Bureaucrat &rhs); // right hand side 2번째 매개변수라는 의미의 rhs

        const std::string &getName() const;
        const int& getGrade() const;

        void incrementGrade(int grade);
        void decrementGrade(int grade);

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

std::ostream& operator<<(std::ostream& out, const Bureaucrat &rhs);

#endif