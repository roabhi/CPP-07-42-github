/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabril-h <rabril-h@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 21:38:23 by rabril-h          #+#    #+#             */
/*   Updated: 2023/11/11 14:23:31 by rabril-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

#define MAX_VAL 5

int	tester1( void )
{
    Array< int >	numbers( MAX_VAL );
    int				*mirror;

    srand( time( NULL ) );
	mirror = new int[ MAX_VAL ];

    std::cout << std::endl << "Añadiendo valores al array entre 0 y 100 " << std::endl;
    std::cout << "++++++++++++++++++++++++++++++++++++++++++ " << std::endl<< std::endl;

    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand()%(100-0 + 1) + 0;
        std::cout << "El valor insertado en " << i << " es " << value << std::endl;
        numbers[ i ] = value;
        mirror[ i ] = value;
    }
    {
        std::cout << std::endl << "Intentando usar el operador de igualacion " << std::endl;
        std::cout << "++++++++++++++++++++++++++++++++++++++++++ " << std::endl<< std::endl;
        Array< int > tmp = numbers;
        Array< int > test( tmp );
        for (int i = 0; i < MAX_VAL; i++)
            std::cout << "Ok, el valor de mi array de igualacion en la posicion " << i  << " es |" << tmp[i] << "|" << std::endl;
    }

    std::cout << std::endl << "Comparando valores entre arrays" << std::endl;
    std::cout << "++++++++++++++++++++++++++++++++++++++++++ " << std::endl<< std::endl;

    for (int i = 0; i < MAX_VAL; i++)
    {
        std::cout << "La posición que comparo es " << i << " donde el valor de mi array original es " << numbers[i] << " y el de mi copia es " << mirror[i] << std::endl;
        
        if (mirror[ i ] != numbers[ i ])
        {
            std::cerr << "No se guardo el mismo valor!!" << std::endl;
            return ( 1 );
        }
    }
    try
    {
        std::cout << std::endl << "Intentando acceder a la posicion -2 del array" << std::endl;
        std::cout << "++++++++++++++++++++++++++++++++++++++++++ " << std::endl<< std::endl;
        numbers[ -2 ] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        std::cout << std::endl << "Intentando acceder a la ultima posicion +1 añadiendole 0" << std::endl;
        std::cout << "++++++++++++++++++++++++++++++++++++++++++ " << std::endl<< std::endl;
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

void	tester2( void )
{
	Array< int >	_arr;

    std::cout << std::endl << "Intentando acceder a la prinera posicion de un array sin tamaño." << std::endl;
    std::cout << "++++++++++++++++++++++++++++++++++++++++++ " << std::endl<< std::endl;

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
	if ( tester1() == 1)
	{
		std::cerr << "Error en test1" << std::endl;
		return ( 1 );
	}
	tester2();
    return ( 0 );
}

