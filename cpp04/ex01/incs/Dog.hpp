#pragma once
#ifndef DOG_HPP
# define DOG_HPP

#include "../incs/Animal.hpp"

class Dog : public Animal
{
    private:
        Brain *brain;

    public:
        Dog(void);
        Dog(const Dog &dog);
        ~Dog(void);

        Dog &operator=(const Dog &dog);

        void makeSound(void) const;
        
        Brain *getBrain(void) const;
        // const std::string &getBrainIdea(int idx) const;
        // void setBrainIdea(int idx, std::string idea);
};

#endif