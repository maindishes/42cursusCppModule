#include "../incs/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void)
:Form::Form("PresidentialPardonForm", 25, 5), target("")
{
}

PresidentialPardonForm::PresidentialPardonForm(const std::string target)
: Form::Form("PresidentialPardonForm",25,5),target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &rhs)
: Form::Form(rhs), target(rhs.target)
{}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs)
{
    //if(this != &rhs)
    //Form::operator=(rhs);
    this->target = rhs.target;
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm(void) {}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
    if (this->getIsSigned() && (executor.getGrade() <= this->getGradeToExecute()))
    {
        std::cout << this->target << " has been pardoned by Zafod Beebelebrox." << std::endl;
    }
    else
    {
        std::cerr << executor.getName() << " ";
        throw Form::CantExecuteForm();
    }
}