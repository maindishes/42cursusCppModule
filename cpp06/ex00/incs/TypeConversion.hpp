#ifndef TYPECONVERSION_HPP
#define TYPECONVERSION_HPP

#include <iostream>
#include <string>
#include <cctype>
#include <cstdlib>

class TypeConversion
{
    private:
        // std::string _input;
        // int _type;
        int _Type;
        double _literal;

        enum {
            charType = 0,
            intType,
            floatType,
            doubleType,
        };

        void setType(const std::string input);
        TypeConversion();

    public:
        // TypeConversion(const char *s);
        TypeConversion(const std::string input);
        TypeConversion(const TypeConversion &rhs);
        ~TypeConversion();
        
        TypeConversion& operator=(const TypeConversion &rhs); 
    
        void toChar() const;
        void toInt() const;
        void toFloat() const;
        void toDouble() const;

        // class NonDisplayException : public std::exception
        // {
        //     const char *what() const throw();
        // };
        // class ImpossibelException : public std::exception
        // {
        //     const char *what() const throw();
        // };
        class InvalidInputException : public std::exception
        {
            const char *what() const throw();
        };
};
// std::ostream &operator<<(std::ostream &os, TypeConversion const &rhs);
#endif