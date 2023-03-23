#include "main.h"

/**
 *print_square - print number
 *@size: variable
 *Return: nothing
 */

void print_square(int size)
{
	int i = 0;
	int j = 0;

	if (size <= 0)
{
		_putchar('\n');
		return;
}
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			_putchar('#');
			j++;
		}
		_putchar('\n');
		i++;
	}

}
