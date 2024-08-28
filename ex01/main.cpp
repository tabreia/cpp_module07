#include "iter.hpp"
#include <iostream>

void ft_tolower(char &arr)
{
	arr = std::tolower(static_cast<unsigned char>(arr));
}

void ft_toupper(char &arr)
{
	arr = std::toupper(static_cast<unsigned char>(arr));
}

int main()
{
	char a[] = {'A', 'B', 'C'};

	std::cout << "Original:" <<
			  "\na[0]: " << a[0] <<
			  "\na[1]: " << a[1] <<
			  "\na[2]: " << a[2] << std::endl << std::endl;

	::iter(a, 3, ft_tolower);
	std::cout << "Iterate ft_tolower:" <<
			  "\na[0]: " << a[0] <<
			  "\na[1]: " << a[1] <<
			  "\na[2]: " << a[2] << std::endl << std::endl;

	::iter(a, 3, ft_toupper);
	std::cout << "Iterate ft_toupper:" <<
			  "\na[0]: " << a[0] <<
			  "\na[1]: " << a[1] <<
			  "\na[2]: " << a[2] << std::endl;
}