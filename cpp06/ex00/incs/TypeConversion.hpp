#ifndef TYPECONVERSION_HPP
#define TYPECONVERSION_HPP

#include <iostream>
#include <string>
#include <cctype>
#include <cstdlib>

class TypeConversion
{
    private:

        int _Type;
        double _literal;

        enum {
            charType = 0,
            intType,
            floatType,
            doubleType,
            noType
        };

        void setType(const char *input);
        TypeConversion();

    public:
        TypeConversion(const char *input);
        TypeConversion(const TypeConversion &rhs);
        ~TypeConversion();
        
        TypeConversion& operator=(const TypeConversion &rhs); 
    
        void toChar() const;
        void toInt() const;
        void toFloat() const;
        void toDouble() const;

        class InvalidInputException : public std::exception
        {
            const char *what() const throw();
        };
};

#endif