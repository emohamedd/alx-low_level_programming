#include "variadic_functions.h"

/* BY ENOHAMEDD */



/**
 *putstr - prints the string
 *@str: printed string
 *Return: void
 */

void putstr(char *str)
{
	int i = 0;

	if (!str)
		str = "(nil)";
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}

}


/**
 *print_strings - printd string by \n
 *@separator: the string
 *@n: int string
 *@...: inf string
 *Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;

	va_start(ap, n);
	while (i < n)
	{
		putstr(va_arg(ap, char *));
		if (separator && i < n - 1)
			putstr((char *) separator);
		i++;
	}
	putstr("\n");
	va_end(ap);
}
