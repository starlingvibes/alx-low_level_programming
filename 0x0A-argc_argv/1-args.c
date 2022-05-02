#include "main.h"

/**
 * main - prints the number of arguments passed to it
 * @argc - the argument count
 * @argv - the argument vector
 * Return: 0
 */

int main(int argc, __attribute__((unused)), char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
