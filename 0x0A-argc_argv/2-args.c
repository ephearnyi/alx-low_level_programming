#include <stdio.h>
/**
 * main - prints all args
 * @argc: args count
 * @argv: args variable
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i = 0;

	if (argc > 0)
	{
		while (i < argc)
		{
			printf("%s\n", argv[i]);
			i++;
		}
	}
	return (0);
}
