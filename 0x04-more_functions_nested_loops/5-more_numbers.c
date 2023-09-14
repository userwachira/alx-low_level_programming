#include "main.h"
/**
 * more_numbers - prints a sequence of numbers 10 times
 */
void more_numbers(void)
{
	int i, j;

	i = 0;
	while (i < 10)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
			{
				_putchar('1');
			}

			_putchar('0' + (j % 10));
		}
		_putchar('\n');
		i++;
	}
}
