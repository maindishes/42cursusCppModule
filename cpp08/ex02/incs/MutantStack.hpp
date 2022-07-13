#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

# include <stack>
# include <algorithm>

template <typename T>
class MutantStack : public std::stack<T>
{
    public:
	    MutantStack(void);
	    MutantStack(const MutantStack &rhs);
	    ~MutantStack(void);

	    MutantStack &operator=(const MutantStack &rhs);


        typedef typename std::stack<T>::container_type::iterator iterator;
        iterator begin(); //{ return (std::stack<T>::c.begin()); }
        iterator end();// { return (std::stack<T>::c.end()); }

        typedef typename std::stack<T>::container_type::const_iterator const_iterator;
        const_iterator cbegin() const; //{ return (std::stack<T>::c.begin()); }
        const_iterator cend() const;// { return (std::stack<T>::c.end()); }
        
        typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
        reverse_iterator rbegin();
        reverse_iterator rend();
        
        typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;
        const_reverse_iterator crbegin() const;
        const_reverse_iterator crend() const;
};

template <typename T>
MutantStack<T>::MutantStack(void) {}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack &rhs) : MutantStack<T>::stack(rhs) 
{
	*this = rhs;
}

template <typename T>
MutantStack<T> &MutantStack<T>::operator=(const MutantStack<T> &rhs) 
{
	MutantStack<T>::stack::operator=(rhs);
	return (*this);
}

template <typename T>
MutantStack<T>::~MutantStack() {}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin() 
{
	return this->c.begin();	
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end() 
{
	return this->c.end();
}

template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::cbegin() const
{
	return this->c.begin();	
}

template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::cend() const
{
	return this->c.end();
}
//
template <typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rbegin() 
{
	return this->c.rbegin();	
}

template <typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rend() 
{
	return this->c.rend();
}

template <typename T>
typename MutantStack<T>::const_reverse_iterator MutantStack<T>::crbegin() const
{
	return this->c.rbegin();	
}

template <typename T>
typename MutantStack<T>::const_reverse_iterator MutantStack<T>::crend() const
{
	return this->c.rend();
}

#endif