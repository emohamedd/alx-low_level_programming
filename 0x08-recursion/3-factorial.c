#include "main.h"
#include <unistd.h>
#include <stdio.h>
/**
 * factorial - prints
 * @n: an array of pointers
 *Return: nothing void
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
