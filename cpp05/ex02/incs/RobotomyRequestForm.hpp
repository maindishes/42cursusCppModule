#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"
# include <cstdlib>
# include <ctime>

class RobotomyRequestForm :public Form
{
    private:
        std::string target;
    public:
        RobotomyRequestForm(void);
        RobotomyRequestForm(const std::string target);
        RobotomyRequestForm(const RobotomyRequestForm &rhs);
        ~RobotomyRequestForm(void);

        RobotomyRequestForm &operator=(const RobotomyRequestForm &rhs);

        void execute(Bureaucrat const &executor) const;
};
#endif
