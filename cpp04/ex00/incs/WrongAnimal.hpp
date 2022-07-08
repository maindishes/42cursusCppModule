// #pragma once
#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
    protected:
        std::string _type;
    public:
        WrongAnimal(void);
        WrongAnimal(const WrongAnimal &ani);
        ~WrongAnimal(void);

        WrongAnimal &operator=(const WrongAnimal &ani);
        void makeSound(void) const;
        const std::string &getType(void) const;
};
#endif