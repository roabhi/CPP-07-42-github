/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabril-h <rabril-h@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 20:27:31 by rabril-h          #+#    #+#             */
/*   Updated: 2023/11/06 20:40:58 by rabril-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Whatever.hpp"
#include <iostream>

int main(void)
{
  std::cout << "Test with char" << std::endl << std::endl;

  char ch1 = 'a';
  char ch2 = 'b';

  std::cout << "Before swap a is " << ch1 << " and b is " << ch2 << std::endl;
	swap(ch1, ch2);
  std::cout << "After swap a is " << ch1 << " and b is " << ch2 << std::endl;

	std::cout << "The min value between a and b is " << min(ch1,ch2) << " " << std::endl;
  std::cout << "The max value between a and b is " << max(ch1,ch2) << " " << std::endl << std::endl;

  std::cout << "Test with int" << std::endl << std::endl;

  int num1= 42;
  int num2 = 4200;

  std::cout << "Before swap a is " << num1 << " and b is " << num2 << std::endl;
	swap(num1, num2);
  std::cout << "After swap a is " << num1 << " and b is " << num2 << std::endl;

	std::cout << "The min value between a and b is " << min(num1,num2) << " " << std::endl;
  std::cout << "The max value between a and b is " << max(num1,num2) << " " << std::endl << std::endl;

  std::cout << "Test with double" << std::endl << std::endl;

  double db1= 42.42;
  double db2 = 4200.42;

  std::cout << "Before swap a is " << db1 << " and b is " << db2 << std::endl;
	swap(db1, db2);
  std::cout << "After swap a is " << db1 << " and b is " << db2 << std::endl;

	std::cout << "The min value between a and b is " << min(db1,db2) << " " << std::endl;
  std::cout << "The max value between a and b is " << max(db1,db2) << " " << std::endl << std::endl;
  
  return (0);
}