#include "../incs/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void)
:Form::Form("RobotomyRequestForm", 72, 45), target("")
{
}

RobotomyRequestForm::RobotomyRequestForm(const std::string target)
: Form::Form("RobotomyRequestForm",72,45),target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &rhs)
: Form::Form(rhs), target(rhs.target)
{}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs)
{
    //if(this != &rhs)
    //Form::operator=(rhs);
    this->target = rhs.target;
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm(void) {}

void RobotomyRequestForm::excute(Bureaucrat const &executor) const
{
    if (this->getIsSigned() && (executor.getGrade() <= this->getGradeToExecute()))
    {
        std::cout << "Drrrrrrrrrrrrrrrrrrrrrrrrrrrrr" << std::endl;
        srand(time(NULL));
        if (std::rand() % 2)
            std::cout << this->target << " has been robotomized successfully" << std::endl;
        else
            std::cout << this->target << " failed to robotmoize" << std::endl;
    }
    else
    {
        std::cerr << executor.getName() << " ";
        throw Form::CantExecuteForm();
    }
}