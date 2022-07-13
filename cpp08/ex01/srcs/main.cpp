#include "../incs/Span.hpp"
#include <iostream>
#include <vector>
#include <deque>
#include <list>


void defaultTest() 
{
	std::cout << "====== default Test ======" << std::endl;
	Span sp = Span(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
}

void test1() 
{
	std::cout << "====== Test1 ======" << std::endl;
	try 
	{
		Span sp = Span(10000);

		for (int i = 0; i < 10000; ++i) 
		{
			sp.addNumber(rand() % 10000);
		}
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;

		sp.addNumber(rand() % 10000);

	} 
	catch (std::exception &e) 
	{
		std::cout << e.what() << std::endl;
	}
}

void countExceptionTest1() {
	std::cout << "====== count Exception Test1 ======" << std::endl;
	try {
		Span sp = Span(5);
		sp.addNumber(1);
		std::cout << sp.shortestSpan() << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}

void countExceptionTest2() {
	std::cout << "====== count Exception Test2 ======" << std::endl;
	try {
		Span sp = Span(5);
		std::cout << sp.longestSpan() << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}

void iterTest1() {
	std::cout << "====== iter Test1 ======" << std::endl;
	try {
		Span sp(10);
		std::vector<int> vec;
		for (int i = 0; i < 10; ++i)
			vec.push_back(rand() % 100);
		sp.addNumber(vec.begin(), vec.end());
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}

void iterTest2() {
	std::cout << "====== iter Test2 ======" << std::endl;
	try {
		Span sp(10);
		std::vector<int> vec;
		for (int i = 0; i < 10; ++i)
			vec.push_back(rand() % 100);

		sp.addNumber(1);
		sp.addNumber(vec.begin(), vec.end());
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}

void deeptest()
{
	std::cout << "====== deep test ======" << std::endl;
	std::vector<int> vec;
    std::vector<int> copy_vec(vec);
    vec.push_back(5);
    vec.push_back(3);
    vec.push_back(2);
    vec.push_back(17);
    vec.push_back(1);
	copy_vec.push_back(100);
    int *vec_address = &vec[0];
    int *copyvec_address = &copy_vec[0];
	std::cout << "origin [0] : " << vec[0] << std::endl;
	std::cout << "Copy [0] : " << copy_vec.front() << std::endl;
    std::cout << "copy_vec : " << copyvec_address << std::endl;
    std::cout << "vec: " << vec_address << std::endl;
}

int main() {
	std::srand(std::time(NULL));
	defaultTest();
	test1();
	countExceptionTest1();
	countExceptionTest2();
	iterTest1();
	iterTest2();
	deeptest();
}
