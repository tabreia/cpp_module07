#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template <typename T>

class Array
{
		T				*array;
		unsigned int	size;
	public:
		Array()
		{
			size = 0;
			std::cout << "Default constructor called" << std::endl;
			this->array = new T[this->size];
		}
		Array(unsigned int size) : size(size)
		{
			std::cout << "Constructor for an array of size " << size << " called" << std::endl;
			this->array = new T[this->size];
		}
		Array(const Array &src) : size(src.getSize())
		{
			std::cout << "Copy constructor called" << std::endl;
			this->array = NULL;
			*this = src;
		}
		~Array()
		{
			std::cout << "Deconstructor called" << std::endl;
			if (this->array != NULL)
				delete [] this->array;
		}

		Array &operator=(const Array &src)
		{
			if (this->array != NULL)
				delete [] this->array;
			if (src.getSize() != 0)
			{
				this->size = src.getSize();
				this->array = new T[this->size];
				for (unsigned int i = 0; i < this->size; ++i)
					this->array[i] = src.array[i];
			}
			return (*this);
		}
		T &operator[](unsigned int index)
		{
			if (index >= this->size || this->array == NULL)
				throw Array<T>::InvalidIndexException();
			return (this->array[index]);
		}

		class InvalidIndexException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};

		unsigned int getSize() const
		{
			return (this->size);
		}
};

template <typename T>

const char *Array<T>::InvalidIndexException::what() const throw()
{
	return ("Invalid Index");
}

#endif