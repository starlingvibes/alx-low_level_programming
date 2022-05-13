#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name to print
 * @f: pointer to a function
 *
 * Return: NIL
 *
 */

void print_name(char *name, void (*f)(char *))
{
	printf("%s\n", name);
}
