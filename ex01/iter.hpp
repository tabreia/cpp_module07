#ifndef ITER_HPP
# define ITER_HPP

template <typename T>

void iter(T *arr, int size, void (*func)(T &))
{
	if (!arr || !func || !size)
		return;
	for (int i = 0; i < size; ++i)
		func(arr[i]);
}




#endif