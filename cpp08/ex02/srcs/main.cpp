#include "../incs/MutantStack.hpp"
#include <list>
#include <iostream>

int main()
{
	{
		std::cout << "Test with MutantStack" << std::endl;
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
	}
	std::cout << std::endl;
	{
		std::cout << "Test with list" << std::endl;
        std::list<int> list;
        list.push_front(5);
        list.push_front(17);
        std::cout << list.front() << std::endl;
        list.pop_front();
        std::cout << list.size() << std::endl;
        list.push_back(3);
        list.push_back(5);
        list.push_back(737);
        list.push_back(0);
        std::list<int>::iterator it2 = list.begin();
        std::list<int>::iterator ite2 = list.end();
        ++it2;
        --it2;
        while (it2 != ite2)
        {
            std::cout << *it2 << std::endl;
            ++it2;
        }
        std::list<int> s(list);
	}

 	{
	std::cout << "=========== default Test ===========" << std::endl;
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite) {
		std::cout << *it << " ";
		++it;
	}
	std::cout << std::endl;
	std::stack<int> s(mstack);
	while (!s.empty()) {
		std::cout << s.top() << " ";
		s.pop();
	}
	std::cout << std::endl << "=========== reverse_iterator Test ===========" << std::endl;
	MutantStack<int>::reverse_iterator rit = mstack.rbegin();
	MutantStack<int>::reverse_iterator rite = mstack.rend();
	for (MutantStack<int>::reverse_iterator it = rit; it != rite; ++it) {
		std::cout << *it << " ";
	}

	std::cout << std::endl << "=========== copy Test ===========" << std::endl;
	MutantStack<int> mcopy(mstack);
	mcopy.pop();
	mcopy.pop();
	mcopy.push(10);
	mcopy.push(11);
	mcopy.push(12);
	while (!mcopy.empty()) {
		std::cout << mcopy.top() << " ";
		mcopy.pop();
	}

	std::cout << std::endl << "=========== assignment Test ===========" << std::endl;
	MutantStack<int> massign = mstack;
	massign.pop();
	massign.push(20);
	massign.push(21);
	massign.push(22);
	while (!massign.empty()) {
		std::cout << massign.top() << " ";
		massign.pop();
	}

	std::cout << std::endl;

	return (0);
	}
}