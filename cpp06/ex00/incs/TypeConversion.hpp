#ifndef TYPECONVERSION_HPP
#define TYPECONVERSION_HPP

#include <iostream>
#include <string>
#include <cctype>
#include <cstdlib>

class TypeConversion
{
    private:
        std::string _input;
        int _type;
        TypeConversion();
    public:
        // enum {
        //     noType = -1,
        //     charType,
        //     intType,
        //     floatType,
        //     doubleType,
        //     nanTyep,
        //     infType
        // };
        enum {C, N};
        TypeConversion(const std::string s);
        TypeConversion(const TypeConversion &rhs);
        ~TypeConversion();
        TypeConversion& operator=(const TypeConversion &rhs); 

        std::string getInput() const;
        int getType() const;

        int toInt() const;
        char toChar() const;
        float toFloat() const;
        double toDouble() const;

        class NonDisplayException : public std::exception
        {
            const char *what() const throw();
        };
        class ImpossibelException : public std::exception
        {
            const char *what() const throw();
        };
};
std::ostream &operator<<(std::ostream &os, TypeConversion const &rhs);
#endif