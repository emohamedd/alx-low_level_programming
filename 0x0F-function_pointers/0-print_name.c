#include "function_pointers.h"


/* By EMOHAMEDD */

/**
 *print_name - initializes a struct
 *@name: the  value
 *@f: the value
 *Return: void
 */


void print_name(char *name, void (*f)(char *))
{
	f(name);
}
kkk
