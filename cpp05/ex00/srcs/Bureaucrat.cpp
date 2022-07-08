#include "../incs/Bureaucrat.hpp"


Bureaucrat::Bureaucrat(void) 
: name("default_Bname"),grade(Bureaucrat::lowestGrade)
{
    checkGrade();
}

Bureaucrat::Bureaucrat(const std::string name, const int grade) 
: name(name), grade(grade)
{
    checkGrade();
}

Bureaucrat::Bureaucrat(const Bureaucrat &rhs)
: name(rhs.name), grade(rhs.grade)
{
    checkGrade();
}

Bureaucrat::~Bureaucrat(void) {}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &rhs)
{
    // 이걸 자기 자신 대입되는걸 거를 필요가 있나 ? 
    // *const_cast<std::string*>(&name) =rhs.name;
    this->grade = rhs.grade;
    std::cout << "Warning: name can not be copied. Only grade copied" << std::endl;
    checkGrade();
    return *this;
}

const std::string &Bureaucrat::getName(void) const
{
    return (this->name);
}

const int &Bureaucrat::getGrade(void) const
{
    return (this->grade);
}

void Bureaucrat::incrementGrade(const int n)      // 등급을 올리는 2->1
{
    this->grade -= n;
    checkGrade();
}

void Bureaucrat::decrementGrade(const int n) // 등급을 내리는 1->2
{
    this->grade += n;
    checkGrade();
}

void Bureaucrat::checkGrade(void) const
{
    if (this->grade < Bureaucrat::highestGrade)
        throw Bureaucrat::GradeTooHighEcxeption();
    else if (this->grade > Bureaucrat::lowestGrade)
        throw Bureaucrat::GradeTooLowEcxeption();
}

const char *Bureaucrat::GradeTooHighEcxeption::what() const throw()
{
    return ("Grade is too high");
}

const char *Bureaucrat::GradeTooLowEcxeption::what() const throw()
{
    return ("Grade is too low");
}

std::ostream &operator << (std::ostream &out, const Bureaucrat &rhs)
{
    out << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
    return out;
}
