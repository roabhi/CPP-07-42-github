/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabril-h <rabril-h@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 20:51:10 by rabril-h          #+#    #+#             */
/*   Updated: 2023/11/08 00:17:14 by rabril-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Iter.hpp"


void addOne(int &i)
{
  i += 10;
}

void toUpper(char &c)
{
  c -= 32;
}

int main(void)
{
  std::cout << " TEST WITH INT " << std::endl << std::endl;
  
  
  int arr1[10] = {0,1,2,3,4,5,6,7,8,9};
  unsigned long c = 0;

  while(c < sizeof(arr1) / sizeof(int))
  {
    std::cout << "Value of position " << c << " BEFORE operation is " << arr1[c] << std::endl;
    c++;
  }

  iter(arr1, 10, *addOne);

  std::cout << std::endl;

  c = 0;

  while(c < sizeof(arr1) / sizeof(int))
  {
    std::cout << "Value of position " << c << " AFTER OPERATION is " << arr1[c] << std::endl;
    c++;
  }



  std::cout << std::endl << " TEST WITH CHAR " << std::endl << std::endl;

   
char arr2[11] = {'h','e','l','l','o',' ','w','o','r','l','d'};
  // char arr2[] = "hello world";
  c = 0;
std::cout << sizeof(arr2) / sizeof(char) << std::endl;
  while(c < sizeof(arr2) / sizeof(char))
  {
    std::cout << "Value of position " << c << " BEFORE operation is " << arr2[c] << std::endl;
    c++;
  }

  iter(arr2, 11, *toUpper);

  std::cout << std::endl;

  c = 0;

  while(c < sizeof(arr2) / sizeof(char))
  {
    std::cout << "Value of position " << c << " AFTER OPERATION is " << arr2[c] << std::endl;
    c++;
  }
  
  return (0);
}