#include <stdio.h>
/**
 * main - print num of arguments
 * @argc: args count
 * @argv: args variable
 * Return: 0
 */
int main(int argc, char **argv)
{
	(void) argv;
	printf("%i\n", argc - 1);
	return (0);
}
