#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/* By EMOHAMEDD */

/**
 * _strlen - The Function
 * @s:  The variable
 * Return: The Return value/void
 */

unsigned int _strlen(char *s)
{
	unsigned int i = 0;
	while (s[i])
		i++;
	return (i);
}

/* By EMOHAMEDD */

/**
 * str_concat - The Function
 * @s1:  The variable
 * @s2: The Variable
 * Return: The Return value/void
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	int size;
	char *p;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	size = _strlen(s1) + _strlen(s2) + 1;
	p = malloc(size * sizeof(char));
	if (!p)
		return (NULL);
	while (s1[i])
	{
		p[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		p[i + j] = s2[j];
		j++;
	}
	p[i + j] = s2[j];
	return (p);
}
