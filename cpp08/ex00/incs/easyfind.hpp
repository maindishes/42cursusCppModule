#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <exception>
#include <algorithm>

class OutOfRangeException : public std::exception 
{
    public:
	    const char* what() const throw();
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