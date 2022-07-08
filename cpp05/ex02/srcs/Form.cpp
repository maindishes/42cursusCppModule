#include "../incs/Form.hpp"


Form::Form(void)
:name(""), isSigned(false), gradeToSign(Form::lowestGrade), gradeToExecute(Form::lowestGrade)
{
    checkGrade();
}

Form::Form(const std::string name, const int gradeToSign, const int gradeToExecute)
: name(name), isSigned(false), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute)
{
    checkGrade();
}

Form::Form(const Form &rhs)
: name(rhs.name), isSigned(rhs.isSigned), gradeToSign(rhs.gradeToSign), gradeToExecute(rhs.gradeToExecute)
{
    checkGrade();
}

Form::~Form(void) {}

Form &Form::operator=(const Form &rhs)
{
    // 자기자신 복제하는거 처리할 필요가..?
    // *const_cast<std::string*>(&name) = rhs.getName();
    // *const_cast<int*>(&gradeToSign) = rhs.getGradeToSign();
    // *const_cast<int*>(&gradeToExecute) = rhs.getGradeToExecute();
    this->isSigned = rhs.isSigned;
    std::cout << "Warning: Only isSigned copied" << std::endl;
    checkGrade();
    return *this;
}

const std::string &Form::getName(void) const
{
    return (this->name);
}
bool Form::getIsSigned(void) const
{
    return this->isSigned;
}

int Form::getGradeToSign(void) const
{
    return (this->gradeToSign);
}

int Form::getGradeToExecute(void) const
{
    return this->gradeToExecute;
}
void Form::beSigned(const Bureaucrat &rhs)
{
    if (rhs.getGrade() > this->gradeToSign)
        throw Form::GradeTooLowException();
    this->isSigned = true;
}

void Form::checkGrade(void) const
{
    if (this->gradeToSign < Form::higestGrade || this->gradeToExecute < Form::higestGrade)
        throw Form::GradeTooHighException();
    else if (this->gradeToSign > Form::lowestGrade || this->gradeToExecute > Form::lowestGrade)
        throw Form::GradeTooLowException();
}

const char *Form::GradeTooHighException::what() const throw()
{
    return ("Grade is too high");
}

const char *Form::GradeTooLowException::what() const throw()
{
    return ("Grade is too low");
}

const char *Form::CantExecuteForm::what() const throw()
{
    return ("can not execute form");
}

std::ostream &operator << (std::ostream &out, const Form &rhs)
{
    out << "-------Form-------\n";
    out << rhs.getName() 
       << ", Required grade to sign " << rhs.getGradeToSign()
       << ", Required grade to execute " << rhs.getGradeToExecute()
       << ", Is signed ";
    if (rhs.getIsSigned())
        std::cout << "true";
    else
        std::cout << "false";
    out << "\n------------------\n";
    return out;
}