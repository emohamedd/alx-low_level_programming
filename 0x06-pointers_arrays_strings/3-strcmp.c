#include "main.h"

/**
 * _strcmp - a function that print n elem of array
 * @s1: pointer variable
 * @s2: variable
 * Return: void return nothing
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] && s2[i])
	{
		if (s1[i] > s2[i])
			return ((unsigned char)s1[i] - s2[i]);
	 	if (s1[i] < s2[i])
			return  ((unsigned char)s1[i] - s2[i]);
		i++;
	}
	return (0);
}
int main(void)
{
    char s1[] = "Hello";
    char s2[] = "World!";

    printf("%d\n", _strcmp(s1, s2));
    printf("%d\n", _strcmp(s2, s1));
    printf("%d\n", _strcmp(s1, s1));
    return (0);
}
