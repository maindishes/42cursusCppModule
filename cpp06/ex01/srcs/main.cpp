#include "../incs/Data.hpp"

int main(void)
{
	Data d1("kkk");
	std::cout << &d1 << ": " << d1.getData() << std::endl;

	uintptr_t uip = serialize(&d1);
	std::cout << uip << std::endl;

	Data *d2 = deserialize(uip);
	std::cout << d2 <<": " << d2->getData() << std::endl;

	return (0);
}
