#include "../incs/easyfind.hpp"
#include <iostream>
#include <vector>
#include <deque>
#include <list>

const char *::OutOfRangeException::what() const throw()
{
		return ("OutOfRangeException");
}

void vectorTest() 
{
	std::cout << "[vector Test]"  << std::endl;
	std::vector<int> vec;
	for (int i = 0; i < 10; i++) 
    {
		vec.push_back(i);
	}
	for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); ++it) 
    {
		std::cout << *it << " ";
	}
	std::cout << std::endl;

	try 
    {
		std::vector<int>::iterator p1 = easyfind(vec, 2);
		std::cout << *p1 << std::endl;

		std::vector<int>::iterator p2 = easyfind(vec, 10);
		std::cout << *p2 << std::endl;
	} catch (std::exception &e) 
    {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

}

void dequeTest() 
{
	std::cout << "[deque Test]" << std::endl;
	std::deque<int> dq;
	for (int i = 0; i < 10; i++) 
    {
		dq.push_back(i);
	}
	for (std::deque<int>::iterator it = dq.begin(); it != dq.end(); ++it) 
    {
		std::cout  << *it << " ";
	}
	std::cout << std::endl;

	try 
    {
		std::deque<int>::iterator p3 = easyfind(dq, 2);
		std::cout << *p3 << std::endl;

		std::deque<int>::iterator p4 = easyfind(dq, 10);
		std::cout << *p4 << std::endl;
	} catch (std::exception &e) 
    {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
}

void listTest() 
{
	std::cout << "[list Test]"  << std::endl;
	std::list<int> lst;
	for (int i = 0; i < 10; i++) 
    {
		lst.push_back(i);
	}
	for (std::list<int>::iterator it = lst.begin(); it != lst.end(); ++it) 
    {
		std::cout  << *it << " ";
	}
	std::cout  << std::endl;

	try 
    {
		std::list<int>::iterator p5 = easyfind(lst, 2);
		std::cout << *p5 << std::endl;

		std::list<int>::iterator p6 = easyfind(lst, 10);
		std::cout << *p6 << std::endl;
	} catch (std::exception &e) 
    {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
}

int main(void)
{
	vectorTest();
	dequeTest();
	listTest();
	system("leaks ex00");
	return (0);
}