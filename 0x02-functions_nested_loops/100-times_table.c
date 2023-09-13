#include "main.h"
/**
 * print_times_table - prints the n times table
 * @n: integer
 */
void print_times_table(int n)
{
	int a;
	int b;
	int prod;

	if (n < 0 || n> 15)
	{
		return;
	}

	for (a = 0; a <= n; a++)
	{
		for (b = 0; b <= n; b++)
		{
			prod = a * b;
			
			if (prod < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + (prod % 10));
			}
			else if (prod < 100)
			{
				_putchar(' ');
				_putchar('0' + (prod / 10));
				_putchar('0' + (prod % 10));
			}
			else
			{
				_putchar('0' + (prod / 100));
				_putchar('0' + ((prod / 10) % 10));
				_putchar('0' + (prod % 10));
			}
			
			if (b < n)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar('\n');
			}
		}
	}
}

