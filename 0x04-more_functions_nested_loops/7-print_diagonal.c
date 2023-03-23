#include "main.h"

/**
 *print_diagonal- print number
 *@n: variable
 *Return: nothing
 */

void print_diagonal(int n)
{
	int i = 0;
	int j = 0;

	if (n <= 0)
{
		_putchar('\n');
		return;
}
	while (i < n)
	{
		j = 0;
		while (j < i)
		{
			_putchar(' ');
			j++;
		}
		_putchar('\\');
		_putchar('\n');
		i++;
	}
}
