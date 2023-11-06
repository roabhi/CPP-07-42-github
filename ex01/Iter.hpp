/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabril-h <rabril-h@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 20:46:08 by rabril-h          #+#    #+#             */
/*   Updated: 2023/11/06 21:29:25 by rabril-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T>
void  iter(T *arr, unsigned int l, void (*func)(T&))
{
  unsigned int c = 0;

  if (arr != NULL)
  {
    while (c < l)
    {
      (*func)(arr[c]);
      c++;
    }
  }
}

#endif