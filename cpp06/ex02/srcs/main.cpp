#include "../incs/Class.hpp"
#include <cstdlib>
#include <iostream>

#include <iomanip> // setfill

Base *generate(void)
{
    int p = rand() % 3;
    if (p == 0)
	{
		std::cout << "random A" <<std::endl;
        return new A();
	}
    else if (p == 1)
	{
		std::cout << "random B" <<std::endl;
        return new B();
	}
    else if (p == 2)
	{
		std::cout << "random C" <<std::endl;
        return new C();
	}
    else
        throw new std::exception();
}

void identify(Base *p)
{
	if (A *a = dynamic_cast<A *>(p))
	{
		std::cout << "A" << std::endl;
	}
	else if (B *b = dynamic_cast<B *>(p))
	{
		std::cout << "B" << std::endl;
	}
	else if (C *c = dynamic_cast<C *>(p))
	{
		std::cout << "C" << std::endl;
	}
}

void identify(Base &p)
{
	try
	{
		A &a = dynamic_cast<A &>(p);
		std::cout << "A" << std::endl;
		(void)a;
	}
	catch(const std::exception& e) {}
	try
	{
		B &b = dynamic_cast<B &>(p);
		std::cout << "B" << std::endl;
		(void)b;
	}
	catch(const std::exception& e) {}
	try
	{
		C &c = dynamic_cast<C &>(p);
		std::cout << "C" << std::endl;
		(void)c;
	}
	catch(const std::exception& e) {}
}




//////////    test 0

int main(void)
{
	std::srand(static_cast<unsigned int>(std::time(NULL)));
	Base *base = generate();
	identify(base);
	identify(*base);
	delete base;
	return (0);
}


//// test 1///////

// int main(void)
// {
// 	Base	*base;

// 	std::cout << "Identifying with pointers" << std::endl;
// 	for (int i = 0; i < 9; i++)
// 	{
// 		base = generate();
// 		identify(base);
// 		delete base;
// 	}

// 	std::cout << std::endl << "Identifying with references" << std::endl;
// 	for (int i = 0; i < 9; i++)
// 	{
// 		base = generate();
// 		identify(*base);
// 		delete base;
// 	}
// 	system("leaks ex02");
// }



/////// test 2/////////

// class Parent {
// 	std::string s;
// public:
// 	Parent() : s("Parent") {}
// 	virtual ~Parent() {}
// 	void toString() {
// 		std::cout << s << std::endl;
// 	}
// };

// class Child : public Parent {
// 	std::string s;
// public:
// 	Child() : s("Child") {}
// 	void toString() {
// 		std::cout << s << std::endl;
// 	}
// };

// // derived -> base -> derieved (O)
// void test1() {
// 	A a;
// 	Base *basePtr = &a;
// 	A *aptr = dynamic_cast<A*>(basePtr);
// 	if (aptr == NULL)
// 		std::cout << "aptr is NULL" << std::endl;
// 	else
// 		std::cout << "aptr is not NULL" << std::endl;
// 	std::cout << std::setw(50) << std::setfill('-') << '\n';
// }

// // base -> derived (X)
// void test2() {
// 	Base base;
// 	Base *basePtr = &base;
// 	A *aptr = dynamic_cast<A*>(basePtr);
// 	if (aptr == NULL)
// 		std::cout << "aptr is NULL" << std::endl;
// 	else
// 		std::cout << "aptr is not NULL" << std::endl;
// 	std::cout << std::setw(50) << std::setfill('-') << '\n';
// }

// // derived -> base -> derieved (O)
// void test3() {
// 	Child child;
// 	Parent *parentPtr = &child; // 부모 포인터가 자식 객체 주소 가르치게 하면 업캐스팅 된다 컴파일단에서 ~ 
// 	Child *childPtr = dynamic_cast<Child*>(parentPtr);
// 	if (childPtr == NULL)
// 		std::cout << "childPtr is NULL" << std::endl;
// 	else
// 		std::cout << "childPtr is not NULL" << std::endl;
// 	childPtr->toString();
// 	std::cout << std::setw(50) << std::setfill('-') << '\n';
// }

// // base -> derived (X)
// void test4() {
// 	Parent parent;
// 	Parent *parentPtr = &parent;
// 	Child *childPtr = dynamic_cast<Child*>(parentPtr);
// 	if (childPtr == NULL)
// 		std::cout << "childPtr is NULL" << std::endl;
// 	else
// 		std::cout << "childPtr is not NULL" << std::endl;
// 	if (childPtr != NULL)
// 		childPtr->toString();
// 	std::cout << std::setw(50) << std::setfill('-') << '\n';
// }

// int main(void)
// {
// 	std::cout << "[dynamic_cast Test]" << std::endl;
// 	std::cout << std::setw(50) << std::setfill('-') << '\n';
// 	test1();
// 	test2();
// 	test3();
// 	test4();
// 	return (0);
// }