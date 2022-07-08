#pragma once
#ifndef CAT_HPP
# define CAT_HPP

#include "../incs/Animal.hpp"

class Cat : public Animal
{
    private:
        Brain *brain;
        
    public:
        Cat(void);
        Cat(const Cat &cat);
        ~Cat(void);

        Cat &operator=(const Cat &cat);
        
        void makeSound(void) const;
        
        Brain *getBrain(void) const;
        const std::string &getBrainIdea(int idx) const;
        void setBrainIdea(int idx, std::string idea);
};

#endif