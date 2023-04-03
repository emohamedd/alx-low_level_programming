#include "main.h"

/**
 *get_char - gets the code of the letter
 *@c: the letter in hand
 *Return: the encoding
 */

int	get_char(int c)
{
	char *leet = "aAeEoOtTlL";
	char *bin = "4433007711";
	int i = 0;

	while (leet[i])
	{
		if (leet[i] == c)
			return (bin[i]);
		i++;
	}
	return (c);
}

/**
 *leet - encodes a string in 1337
 *@s: the string to encode
 *Return: returns the encoded string
 */

char	*leet(char *s)
{
	int i = 0;

	while (s[i])
	{
		s[i] = get_char(s[i]);
		i++;
	}
	return (s);
}
