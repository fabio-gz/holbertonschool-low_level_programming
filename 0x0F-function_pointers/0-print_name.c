#include "function_pointers.h"
/**
 *print_name - prints a nem
 *@name: string of chars
 *@f: pointer to a function
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	f(name);
}
