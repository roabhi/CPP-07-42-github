/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabril-h <rabril-h@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 21:38:23 by rabril-h          #+#    #+#             */
/*   Updated: 2023/11/08 19:12:51 by rabril-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

#define MAX_VAL 5

int	subjectTest( void )
{
    Array< int >	numbers( MAX_VAL );
    int				*mirror;

    srand( time( NULL ) );
	mirror = new int[ MAX_VAL ];
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand()%(100-0 + 1) + 0;
        std::cout << " El valor insertado en " << i << " es " << value << std::endl;
        numbers[ i ] = value;
        mirror[ i ] = value;
    }
    {
        std::cout << "Intentando usar el operador de igualacion " << std::endl;
        Array< int > tmp = numbers;
        Array< int > test( tmp );
        for (int i = 0; i < MAX_VAL; i++)
            std::cout << "El valor de mi array de igualacion en la posicion " << i  << " es |" << tmp[i] << "|" << std::endl;
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        std::cout << "La posición que comparo es " << i << " donde el valor de mi array original es " << numbers[i] << " y el de mi copia es " << mirror[i] << std::endl;
        
        if (mirror[ i ] != numbers[ i ])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return ( 1 );
        }
    }
    try
    {
        std::cout << "Intentando acceder a la posicion -2 del array" << std::endl;
        numbers[ -2 ] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        std::cout << "Intentando acceder a la ultima posicion +1 añdiendole 0" << std::endl;
        numbers[ MAX_VAL ] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    // std::cout << "Volviendo a setear mi array original" << std::endl;
    // for (int i = 0; i < MAX_VAL ; i++)
    //     numbers[ i ] = rand()%(100-0 + 1) + 0;
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