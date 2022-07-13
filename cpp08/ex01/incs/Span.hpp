#ifndef SPAN_HPP
#define SPAN_HPP

#include <exception>
#include <algorithm>
#include <iostream>
#include <vector>

class Span
{
    public:
        std::vector<int> _v;
        // unsinged int _N;
    public:
        Span();
        Span(unsigned int n);
        Span(const Span &rhs);
        
        Span &operator=(const Span &rhs);
        ~Span();

        void addNumber(int num);
        void addNumber(std::vector<int>::iterator const &begin, std::vector<int>::iterator const &end);
        // void addNumber(std::vector<int>::iterator const begin, std::vector<int>::iterator const end);

        int shortestSpan(void) const;
        int longestSpan(void) const;

        unsigned int getSize() const;
        std::vector<int> getData() const;

        class OverFlowException : public std::exception 
        {
            const char* what() const throw();
        };

        class EmptyException : public std::exception 
        {
            const char* what() const throw();
        };

};

#endif