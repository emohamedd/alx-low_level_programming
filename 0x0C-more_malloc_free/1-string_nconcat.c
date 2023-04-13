#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/* By EMOHAMEDD */

/**
 * string_nconcat - The Function
 * @s1:  The variable
 * @s2: The variable
 * @n: The variable
 * Return: The Return value/void
 */

int  _strlen(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	return (i);
}

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i = 0;
	int j = 0;
	int size;
	char *p;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	if (n >= _strlen(s2))
		size = _strlen(s1) + _strlen(s2) + 1;
	else
		size = _strlen(s1) + n + 1;
	p = malloc(size * sizeof(char));
	if (!p)
		return (NULL);
	while (s1[i])
	{
		p[i] = s1[i];
		i++;
	}
	while (s2[j] && j < n)
	{
		p[i + j] = s2[j];
		j++;
	}
	p[i + j] = s2[j];
	return (p);
}
