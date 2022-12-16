#include "main.h"
/**
 * times_table - shows the multiplication tables
 * Return: 0
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			_putchar((i * j / 10) % 10);
			_putchar(i * j % 10);
			_putchar(',');
			_putchar(' ');
		}

		_putchar('\n');
	}
}
