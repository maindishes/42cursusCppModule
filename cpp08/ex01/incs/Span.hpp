#ifndef SPAN_HPP
#define SPAN_HPP

#include <exception>
#include <algorithm>
#include <iostream>
#include <vector>

class Span
{
    private:
        std::vector<int> v;
        // unsinged int _N;
    public:
        Span();
        Span(unsigned int n);
        Span(const Span &rhs);
        
        Span &operator=(const Span &rhs);
        ~Span();

        void addNumber(int num);
        void addNumber(std::vector<int>::iterator const &begin, std::vector<int>::iterator const &end);

        int shortestSpan(void) const;
        int longestSpan(void) const;



}

class OutOfRangeException : public std::exception {
public:
	const char* what() const throw() {
		return ("OutOfRangeException");
	}
};
template <typename T>
typename T::iterator easyfind(T &container, int target)
{
    typename T::iterator it = std::find(container.begin(), container.end(), target);
    if (it == container.end())
        throw OutOfRangeException();
    return it;
}

#endif