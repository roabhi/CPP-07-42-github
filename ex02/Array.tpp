/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabril-h <rabril-h@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 21:42:15 by rabril-h          #+#    #+#             */
/*   Updated: 2023/11/08 00:20:18 by rabril-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array() : _arr(NULL), _size(0)
{
	//this->arr = NULL;
}

template <typename T>
Array<T>::Array( const Array &array )
{
	this->_size = array.size();
	_arr = new T[this->_size];
	for (unsigned int i = 0; i < _size; i++)
		this->_arr[i] = array[i];
}

template <typename T>
Array<T>::Array(unsigned int n)
{
	this->_size = n;
	_arr = new T[this->_size];
}

template <typename T>
Array<T>::~Array()
{
	delete [] this->_arr;
}

template <typename T>
Array<T>	&Array<T>::operator=( const Array& array )
{
	if (this->_size > 0)
		delete [] this->_arr;
	this->size = array.size();
	_arr = new T[this->_size];
	for (unsigned int i = 0; i < _size; i++)
		this->_arr[i] = array[i];
}

template <typename T>
T	&Array<T>::operator[]( unsigned int pos ) const
{
	std::cout << pos << " // " << this->_size << std::endl;
	if (pos >= this->_size)
		throw std::out_of_range("Please introduce a valid position.");
	return (this->_arr[pos]);
}

template <typename T>
unsigned int Array<T>::size() const
{
	return (this->_size);
}