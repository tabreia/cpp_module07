#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <typename T>

void swap(T &x, T &y)
{
	T temp;

	temp = x;
	x = y;
	y = temp;
}


template <typename V>

V min(V x, V y)
{
	return (x <= y ? x : y);
}


template <typename X>

X max(X x, X y)
{
	return (x >= y ? x : y);
}


#endif