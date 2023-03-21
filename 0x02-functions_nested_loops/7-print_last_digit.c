#include "main.h"

/**
 * _abs - prints the alphabet in lowercase
 * @n: the variable
 * Return: void
 */

int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (last < 0)
		last = -last;
	_putchar(last + '0');
	return (last % 10);
}

int main()
{
	int n;
	scanf("%d", &n);
	print_last_digit(n);
}
