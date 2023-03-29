#include "main.h"

/**
 * string_toupper - a function that print n elem of array
 * @s: String
 * Return: void return nothing
 */

char *string_toupper(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
		i++;
	}
	return (s);
}
