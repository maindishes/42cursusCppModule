#include "../incs/Bureaucrat.hpp"


int main()
{
    try
    {
        Bureaucrat junyopar = Bureaucrat("junyopar", 0);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << std::endl;
    
    try
    {
        Bureaucrat junyopar = Bureaucrat("junyopar", 10);
        std::cout << junyopar << std::endl;
        junyopar.increaseGrade(9);
        std::cout << junyopar << std::endl;
        junyopar.decreaseGrade(149);
        std::cout << junyopar << std::endl;
        junyopar.decreaseGrade(100);
        std::cout << junyopar << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << std::endl;

    try
    {
        Bureaucrat junyopar = Bureaucrat("junyopar", 150);    
        Bureaucrat test = Bureaucrat("test", 150); 
        test = junyopar;
        std::cout << test << std::endl;
        test.increaseGrade(100);   
        std::cout << test << std::endl;
        std::cout << junyopar << std::endl;
        test.increaseGrade(100);   
        std::cout << test << std::endl;
        test.increaseGrade(100);

        std::cout << junyopar << std::endl;   
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    system("leaks ex00");
}
