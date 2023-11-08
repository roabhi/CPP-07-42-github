/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabril-h <rabril-h@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 21:38:23 by rabril-h          #+#    #+#             */
/*   Updated: 2023/11/07 22:10:20 by rabril-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

#define MAX_VAL 10

int	subjectTest( void )
{
    Array< int >	numbers( MAX_VAL );
    int				*mirror;

    srand( time( NULL ) );
	mirror = new int[ MAX_VAL ];
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        std::cout << "el valor añadido al array es " << value << std::endl;
        numbers[ i ] = value;
        mirror[ i ] = value;
    }
    {
        Array< int > tmp = numbers;
        Array< int > test( tmp );
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[ i ] != numbers[ i ])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return ( 1 );
        }
    }
    try
    {
        numbers[ -2 ] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[ MAX_VAL ] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    for (int i = 0; i < MAX_VAL; i++)
        numbers[ i ] = rand();
    delete [] mirror;
	return ( 0 );
}

void	myTest( void )
{
	Array< int >	_arr;

	try
	{
		_arr[ 0 ] = 0;
	}
	catch( std::logic_error& e )
	{
		std::cerr << e.what() << std::endl;
	}
}

int main( void )
{
	if ( subjectTest() == 1)
	{
		std::cerr << "Error in subject Test" << std::endl;
		return ( 1 );
	}
	myTest();
    return ( 0 );
}