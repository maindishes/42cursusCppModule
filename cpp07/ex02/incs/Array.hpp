#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <iostream>
template <typename T>
class Array
{
    private:
        T *array;
        unsigned int arraySize;
    public:
        Array(void) : arraySize(0)
        {
            this->array = new T[0];
        }

        Array(const unsigned int n) : arraySize(n)
        {
            this->array = new T[n];
        }

        Array(const Array &rhs) : arraySize(rhs.arraySize)
        {
            this->array = new T[rhs.arraySize];
            for (unsigned int i= 0; i < rhs.arraySize; i++)
                this->array[i] = rhs.array[i];
        }

        ~Array(void)
        {
            delete[] this->array;
            array = nullptr;
            arraySize = 0;
        }

        T &operator[](const int idx) const
        {
            if (idx >= static_cast<int>(this->arraySize) || idx < 0)
                throw std::overflow_error("Index out of ranges");
            return this->array[idx];
        }
        Array &operator=(const Array &rhs)
        {
            if (this != &rhs)
            {
                this->~Array();
                this->arraySize = rhs.arraySize;
                this->array = new T[rhs.arraySize];
                for (unsigned int i =0; i < rhs.arraySize; i++)
                    this->array[i] = rhs[i];
            }
            return *this;
        }
        unsigned int size(void) const
        {
            return (this->arraySize);
        }
};
#endif