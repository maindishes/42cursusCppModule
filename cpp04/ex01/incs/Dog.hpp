#pragma once
#ifndef DOG_HPP
# define DOG_HPP

#include "../incs/Animal.hpp"

class Dog : public Animal
{
    public:
        Dog(void);
        Dog(const Dog &dog);
        ~Dog(void);

        Dog &operator=(const Dog &dog);

        void makeSound(void) const;
};

#endif