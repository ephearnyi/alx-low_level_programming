#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*more headers go here*/
/**
 * main - printing positive or negatives
 * Return: Always (0) successful
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	/*If True, the program prints */
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	/*If true, print)*/
	{
		printf("%d is zero\n", n);
	}
	else
	/*If the 2 above false, print)*/
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
