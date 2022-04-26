#include "main.h"

/**
 * set-string - sets the value of a pointer to a char
 * @s: the pointer
 * @to: char to set to
 */

void set_string(char **s, char *to)
{
	*s = to;
}
