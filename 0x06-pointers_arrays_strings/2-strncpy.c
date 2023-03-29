#include "main.h"

/**
 * _strncpy - a function that print n elem of array
 * @dest: pointer variable
 * @src: variable
 * @n: variable
 * Return: void return nothing
 */
char *_strncpy(char *dest, char *src, int n)
{

	int i = 0;
	int j = 0;

	while (dest[j])
		j++;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	if (j < n)
	{
		while (i < n)
		{
			dest[i] = '\0';
			i++;
		}
	}
	return (dest);
}
int main(void)
{
    char s1[98] = "Hello ";
    char s2[] = "World!\n";
    char *ptr;

    printf("%s\n", s1);
    printf("%s", s2);
    ptr = _strncat(s1, s2, 1);
    printf("%s\n", s1);
    printf("%s", s2);
    printf("%s\n", ptr);
    ptr = _strncat(s1, s2, 1024);
    printf("%s", s1);
    printf("%s", s2);
    printf("%s", ptr);
    return (0);
}
