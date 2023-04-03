#include "main.h"
#include <unistd.h>
/**
 *puts2 -  a string
 *@str: variable
 *Return: void
 */

void puts2(char *str)
{
	int i  = 0;
	int j = 0;

	while (str[j])
	{
		j++;
	}
	while (i < j)
	{
		write(1, &str[i], 1);
		i += 2;
	}
	_putchar('\n');
}
