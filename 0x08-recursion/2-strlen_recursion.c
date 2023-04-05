#include "main.h"
#include <unistd.h>
#include <stdio.h>
/**
 * _strlen_recursion - prints
 * @s: an array of pointers
 *Return: nothing void
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (_strlen_recursion(s + 1) + 1);

}
