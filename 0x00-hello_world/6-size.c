#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	printf("size of int: %i bytes\n", sizeof(int));
	printf("size of float: %i bytes\n", sizeof(float));
	printf("size of char: %i bytes\n", sizeof(char));
	printf("size of long int: %i bytes\n", sizeof(long int));
	printf("size of long long int: %i bytes\n", sizeof(long long int));

	return (0);
}
