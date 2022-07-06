#include "../incs/Cat.hpp"

Cat::Cat(void) : Animal()   // 얘가 없으면 디폴트 생성자 Animal() 이 호출되긴한다.
{
    this->_type = "Cat";
    std::cout << "Cat default constructor called"<< std::endl;
}

Cat::Cat(const Cat &cat) : Animal(cat)
{
    // this->_type = cat._type;   // Animal(cat) 으로 초기화
    std::cout << "Cat copy constructor called" << std::endl;
    (*this) = cat; // 애도 있으나 마나 필요없다.
}

Cat &Cat::operator=(const Cat &cat)
{
    // this->_type = cat._type;
    Animal::operator=(cat);
    std::cout << "Cat assignment operator called" << std::endl;
    return (*this);
}

Cat::~Cat(void)
{
    std::cout << "Cat default destructor called" << std::endl;
}

void Cat::makeSound(void) const
{
    std::cout
	<< "  \\    /\\ " << std::endl
    << "   )  ( ')  " << std::endl
    << "   (  /  )  " << std::endl
	<< "   \\ (__)|   " << std::endl;
	std::cout << "> Meeeeow" << std::endl;
    std::cout << std::endl;
}
