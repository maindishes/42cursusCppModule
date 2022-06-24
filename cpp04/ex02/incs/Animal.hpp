#pragma once
#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>
# include "../incs/Brain.hpp"

class Animal
{
    protected:
        std::string _type;
    public:
        Animal(void);
        Animal(const Animal &ani);
        virtual ~Animal(void);

        Animal &operator=(const Animal &ani);
        
        virtual void makeSound(void) const = 0; // ex01이랑 여기부분만 다름 헤더파일은
        const std::string &getType(void) const;

        virtual Brain *getBrain(void) const = 0;
        virtual const std::string &getBrainIdea(int idx) const = 0;
        virtual void setBrainIdea(int idx, std::string idea) = 0;
};

#endif