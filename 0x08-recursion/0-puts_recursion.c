#include "main.h"
#include <unistd.h>

/**
 *_puts_recursion - prints a chess board
 *@s: an array of pointers
 *Return: nothing void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(++s);
}
