#pragma once
#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
    protected:
        std::string _type;
        
    public:
        Animal(void);
        Animal(const Animal &ani);
        virtual ~Animal(void);

        Animal &operator=(const Animal &ani);
        virtual void makeSound(void) const;
        const std::string &getType(void) const;
};
#endif