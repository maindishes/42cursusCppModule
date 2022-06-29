#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"

class PresidentialPardonForm :public Form
{
    private:
        std::string target;
    public:
        PresidentialPardonForm(void);
        PresidentialPardonForm(const std::string target);
        PresidentialPardonForm(const PresidentialPardonForm &rhs);
        ~PresidentialPardonForm(void);

        PresidentialPardonForm &operator=(const PresidentialPardonForm &rhs);

        void execute(Bureaucrat const &executor) const;
};
#endif
