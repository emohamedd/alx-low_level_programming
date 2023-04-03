#include "main.h"

/**
 *separ - checks if a character is a separator
 *@c: the character to check
 *Return: escape
 */

int separ(int c)
{
	return (c == ' ' || c == '\n' || c == ',' || c == ';' || c == '!'
			|| c == '?' || c == '"' || c == '(' || c == ')'
			|| c == '{' || c == '}' || c == '\t' || c == '.');
}

/**
 *is_lower - checks if a character is lower case
 *@c: the character in hand
 *Return: 1 if true else 0
 */

int	is_lower(int c)
{
	return (c >= 'a' && c <= 'z');
}

/**
 *cap_string - capitalizes all words of the string
 *@s: the string to capitalize
 *Return: return the capitalized string
 */


char *cap_string(char *s)
{
	int i = 0;

	if (s[i] && is_lower(s[i]))
		s[i] -= 32;
	i++;
	while (s[i])
	{
		if (separ(s[i]) && s[i + 1] && is_lower(s[i + 1]))
			s[i + 1] -= 32;
		i++;
	}
	return (s);
}
