#include "../incs/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void)
:Form::Form("ShrubberyCreationForm", 145, 137), target("")
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target)
: Form::Form("ShrubberyCreationForm",145,137),target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &rhs)
: Form::Form(rhs), target(rhs.target)
{}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs)
{
    //if(this != &rhs)
    //Form::operator=(rhs);
    this->target = rhs.target;
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {}

void ShrubberyCreationForm::excute(Bureaucrat const &executor) const
{
    if (this->getIsSigned() && (executor.getGrade() <= this->getGradeToExecute()))
    {
        std::ofstream ofs;
        std::string tree = 
            "                                              .\n"
            "                                   .         ;\n"
            "      .              .              ;%     ;;\n"
            "        ,           ,                :;%  %;\n"
            "         :         ;                   :;%;'     .,\n"
            ",.        %;     %;            ;        %;'    ,;\n"
            "  ;       ;%;  %%;        ,     %;    ;%;    ,%'\n"
            "   %;       %;%;      ,  ;       %;  ;%;   ,%;'\n"
            "    ;%;      %;        ;%;        % ;%;  ,%;'\n"
            "     `%;.     ;%;     %;'         `;%%;.%;'\n"
            "      `:;%.    ;%%. %@;        %; ;@%;%'\n"
            "         `:%;.  :;bd%;          %;@%;'\n"
            "           `@%:.  :;%.         ;@@%;'\n"
            "             `@%.  `;@%.      ;@@%;\n"
            "               `@%%. `@%%    ;@@%;\n"
            "                 ;@%. :@%%  %@@%;\n"
            "                   %@bd%%%bd%%:;\n"
            "                     #@%%%%%:;;\n"
            "                     %@@%%%::;\n"
            "                     %@@@%(o);  . '\n"
            "                     %@@@o%;:(.,'\n"
            "                 `.. %@@@o%::;\n"
            "                    `)@@@o%::;\n"
            "                     %@@(o)::;\n"
            "                    .%@@@@%::;\n"
            "                    ;%@@@@%::;.\n"
            "                   ;%@@@@%%:;;;.\n"
            "               ...;%@@@@@%%:;;;;,..   ";
        ofs.open(this->target + "_surubbery", std::ofstream::out | std::ofstream::trunc);
        ofs << tree << std::endl;
        ofs.close();
        
        std::cout << executor.getName() << " Create shrubbert file" << std::endl;
    }
    else
    {
        std::cerr << executor.getName() << " ";
        throw Form::CantExecuteForm();
    }
}