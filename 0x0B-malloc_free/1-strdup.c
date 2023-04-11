#include <stdio.h>
#include <stdlib.h>

/* By EMOHAMEDD */

/**
 * _strdup - The Function
 * @str:  The variable
 * Return: The Return value/void
 */

char *_strdup(char *str)
{
	int i = 0;
	int j = 0;
	char *copy;

	if (!str)
		return (NULL);
	while (str[j])
		j++;
	copy = malloc((j + 1) * sizeof(char));
	if (!copy)
		return (NULL);
	while (str[i])
	{
		copy[i] = str[i];
		i++;
	}
	copy[i] = str[i];
	return (copy);
}
