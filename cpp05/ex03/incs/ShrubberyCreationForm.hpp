#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"
# include <fstream>

class ShrubberyCreationForm :public Form
{
    private:
        std::string target;
    public:
        ShrubberyCreationForm(void);
        ShrubberyCreationForm(const std::string target);
        ShrubberyCreationForm(const ShrubberyCreationForm &rhs);
        ~ShrubberyCreationForm(void);

        ShrubberyCreationForm &operator=(const ShrubberyCreationForm &rhs);

        void execute(Bureaucrat const &executor) const;
};
#endif
