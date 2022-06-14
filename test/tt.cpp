#include <iostream>

int plus(int x, int y)
{
	return (x+y);
}

int minus(int x, int y)
{
	return (x-y);
}

int main()
{
	int (*fn)(int,int);						// 함수포인터 변수를 선언

	fn = plus;								// 함수포인터 초기화 방법1
	std::cout << fn(5,2) << std::endl;		// 함수포인터 호출 방법1

	fn = &minus;							// 함수포인터 초기화 방법2
	std::cout << (*fn)(5,2) << std::endl;	// 함수포인터 호출 방법2
	return 0;
}
