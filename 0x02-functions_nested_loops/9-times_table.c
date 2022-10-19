#include "main.h"
/**
 * times_table - times table
 */
void times_table(void)
{
	int (num, times, result)

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');

		for (times = 1; times <= 9; times++)
		{
			_putchar(',');
			_putchar(' ');

			result = num * times;

			if (result <= 9)
				_putchar(' ');
			else
				_putchar((result / 10) + '0');

			_putchar((result % 10) + '0');
		}
		_putchar('\n');
	}
}
