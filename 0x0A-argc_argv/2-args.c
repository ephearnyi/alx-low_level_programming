#include <stdio.h>
/**
 * main - prints all args
 * @argc: args count
 * @argv: args variable
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0, i < argc, i++)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
