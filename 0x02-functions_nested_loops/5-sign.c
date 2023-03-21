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
		printf("+");
		r = 1;
	}
	else if (n == 0)
	{
		printf("0");
		r = 0;
	}
	else
	{
		printf("-");
		r = -1;
	}
	return (r);
}
