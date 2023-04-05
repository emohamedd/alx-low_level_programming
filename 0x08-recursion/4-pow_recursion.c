#include "main.h"
#include <unistd.h>
#include <stdio.h>

/* Created BY @EMOHAMEDD */
/**
 * _pow_recursion - prints
 * @x: var
 * @y: var
*Return: nothing void
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
