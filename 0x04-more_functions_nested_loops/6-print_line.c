#include "main.h"

/**
 *print_line - print numbers from 0 to 14 ten times
 *@n: variable
 *Return: nothing
 */

void print_line(int n)
{
	int i = 0;

	if (n <= 0)
{
		_putchar('\n');
		return;
}
	while (i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
