#ifndef WHATEVER_H
# define WHATEVER_H

#include <iostream>

template< typename T>
void swap( T & a, T  & b )
{
	T c(a);
	a = b;
	b = c;
}

template< typename T>
T const & min( T const & a, T const & b )
{
	return (a>=b ? b : a);
}

template< typename T>
T const & max( T const & a, T const & b)
{
	return (a>b ? a : b);
}


#endif
