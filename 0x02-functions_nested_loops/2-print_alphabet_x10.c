#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet 10 times
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int c, d;

	for (c = '1'; c <= 10; c++)
	{
		for (d = 'a'; d <= 'z'; d++)
			_putchar(d);
	}
	_putchar('\n');
}
