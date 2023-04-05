#include "main.h"
#include <unistd.h>

/**
 *_puts_recursion - prints a chess board
 *@s: an array of pointers
 *Return: nothing void
 */

void _puts_recursion(char *s)
{
	int i = 0;
	while (s[i])
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}
int main(void)
{
    _puts_recursion("Puts with recursion");
    return (0);
}
