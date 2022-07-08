// #pragma once
#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "../incs/WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public:
        WrongCat(void);
        WrongCat(const WrongCat &cat);
        ~WrongCat(void);

        WrongCat &operator=(const WrongCat &cat);

        void makeSound(void) const;
};

#endif