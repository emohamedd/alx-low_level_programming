#include "main.h"
#include <unistd.h>

/**
 *_print_rev_recursion - prints
 * @s: an array of pointers
 *Return: nothing void
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
