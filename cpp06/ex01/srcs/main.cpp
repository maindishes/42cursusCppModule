#include "../incs/data.hpp"
#include <iostream>

uintptr_t serialize(Data *ptr)
{
    return reinterpret_cast<uintptr_t>(ptr);
}

Data *deserialize(uintptr_t raw)
{
    return reinterpret_cast<Data *>(raw);
}

int main(void)
{
    Data *ptr = new Data;
    Data *ptr2;
    uintptr_t raw;

    ptr->data = 42;
    raw = serialize(ptr);
    ptr2 = deserialize(raw);

    std::cout << "ptr->data : " << ptr->data << std::endl;
    std::cout << "ptr2->data : " << ptr2->data << std::endl;
    ptr->data = 24;
    std::cout << "ptr->data : " << ptr->data << std::endl;
    std::cout << "ptr2->data : " << ptr2->data << std::endl;
    return 0;
}