/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabril-h <rabril-h@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 20:28:21 by rabril-h          #+#    #+#             */
/*   Updated: 2023/11/06 20:35:01 by rabril-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

template<typename T>
void swap(T &a, T &b)
{
  T temp;
  temp = a;
  a = b;
  b = temp;
}

template<typename T>
T max(T &a, T &b)
{
  return (a > b ? a : b);
}

template<typename T>
T min(T &a, T &b)
{
  return (a < b ? a : b);
}

#endif