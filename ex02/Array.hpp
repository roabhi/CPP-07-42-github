/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabril-h <rabril-h@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 21:42:26 by rabril-h          #+#    #+#             */
/*   Updated: 2023/11/07 22:06:34 by rabril-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

template <typename T>
class Array
{
	private:
		T				*_arr;
		unsigned int	_size;
	public:
		Array();
		Array( const Array &array );
		Array(unsigned int n);
		~Array();
		Array	&operator=( const Array& array );
		T	&operator[]( unsigned int pos ) const;
		unsigned int size() const;
};

#include "Array.tpp"

#endif
