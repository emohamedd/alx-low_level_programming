#include "main.h"
#include <unistd.h>
#include <stdio.h>


/* By EMOHAMEDD */

/**
 * is_prime - The Function
 * @n:  The variable
 * @i:  The variable
 * Return: The Return value/void
 */
int is_prime(int n, int i)
{
	if (i >= n / 2)
		return (1);
	if (n % i)
		return (is_prime(n, i + 1));
	return (0);
}
/* By EMOHAMEDD */

/**
 * is_prime_number - The Function
 * @n:  The variable
 * Return: The Return value/void
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	if (n == 2)
		return (1);
	return (is_prime(n, 2));
}
