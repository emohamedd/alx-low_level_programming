#include <stdio.h>

/**
 * _strncat - a function that print n elem of array
 * @dest: pointer variable
 * @src: variable
 * @n: variable
 * Return: void return nothing
 */
char *_strncat(char *dest, char *src, int n)
{

	int i = 0;
	int j = 0;

	while (dest[j])
	{
		j++;
	}
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	if (j < n)
	{
		for (; i < n; i++)
		dest[i] = '\0';
	}
	return (dest);
}
