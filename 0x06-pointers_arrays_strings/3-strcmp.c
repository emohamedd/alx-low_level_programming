#include "main.h"

/**
 * _strncpy - a function that print n elem of array
 * @s1: pointer variable
 * @s2: variable
 * Return: void return nothing
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int j = 0;

	while (s1[i] && s2[j])
	{
	if (s1[i] > s2[j])
		return ((unsigned char)s1[i] - s2[j]);
	else if (s1[i] < s2[j])
		return  ((unsigned char)s1[i] - s2[j]);
		i++, j++;
	}
	return (0);
}
