#include "../incs/iter.hpp"
#include <iostream>
#include <string>

void incrementDisplay(const int &n)
{
	std::cout << n + 1 << " ";
}

template <typename T>
void display(const T &p)
{
	std::cout << p << " ";
}


int main()
{
	int a[5] = {1, 2, 3, 4, 5};
	std::string b[5] = {"Hello", "Hi", "And", "Bye", ":)"};
	float c[5] = {1.1f, 2.2f, 3.3f, 4.4f, 5.5f};

	::iter(a, 5, &display);
	std::cout << std::endl;
	::iter(a, 5, &incrementDisplay);
	std::cout << std::endl;
	::iter(b, 5, &display);
	std::cout << std::endl;
	::iter(c, 5, &display);
	std::cout << std::endl;
}