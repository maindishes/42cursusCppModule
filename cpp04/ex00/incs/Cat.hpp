// #pragma once
#ifndef CAT_HPP
# define CAT_HPP

#include "../incs/Animal.hpp"

class Cat : public Animal
{
    public:
        Cat(void);
        Cat(const Cat &cat);
        ~Cat(void);

        Cat &operator=(const Cat &cat);

        void makeSound(void) const;
};

#endif