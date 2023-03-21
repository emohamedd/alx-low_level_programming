#include "main.h"
#include <stdio.h>

/**
 * print_sign - prints the alphabet in lowercase
 * @n: the variable
 * Return: void
 */

int print_sign(int n)
{
	int r;
	if (n > 0)
	{
		putchar('+');
		r = 1;
	}
	else if (n == 0)
	{
		putchar('0');
		r = 0;
	}
	else
	{
		putchar('-');
		r = -1;
	}
	return (r);
}
