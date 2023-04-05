#include "main.h"
#include <unistd.h>
#include <stdio.h>


/* By EMOHAMEDD */

/**
 * natural_sqr - The Function
 * @n:  The variable
 * @i:  The variable
 * Return: The Return value/void
 */

int natural_sqr(int n, int i)
{
	if (i * i > n)
		return (-1);
	else if (i * i == n)
		return (i);
	return (natural_sqr(n, i + 1));
}

/* By EMOHAMEDD */

/**
 * _sqrt_recursion - The Function
 * @n:  The variable
 * Return: The Return value/void
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (natural_sqr(n, 0));
}
