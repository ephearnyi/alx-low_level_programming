#include <stdio.h>
/**
 * main - print num of arguments
 * @argc: args count
 * @argv: args variable
 * Return: 0
 */
int main(int argc, char **argv)
{
	(void)argv;

	printf("%s\n", argv - 1);
	return (0);
}
