#ifndef ITER_HPP
# define ITER_HPP

template <typename T>
void iter(T *array, unsigned int arraySize, void (*f)(const T &))
{
	for (unsigned int i = 0; i < arraySize; i++)
		f(array[i]);
}

#endif