#include "main.h"
#include <unistd.h>
/**
 *print_rev -  a string
 *@s: variable
 *Return: void
 */

void print_rev(char *s)
{

	int i = 0;
	int len;

	while (s[i])
	{
		i++;
	}
	len = i;
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
