#include <stdio.h>
/**
 * main - prints number combination without replacement
 * Return: 0 successful
 */
int main(void)
{
	int num1;
	int num2;

	for (num1 = 0; num1 <= 9; num1++)
	{
		putchar(num1 + '0');
	}
	for (num2 = num1 + 1; num2 <= 9; num2++)
	{
		putchar(num2 + '0');
	}
	if (num1 < 8)
	{
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
