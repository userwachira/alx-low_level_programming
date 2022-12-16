#include "main.h"
/**
 * print_last_digit - prints the last digit
 * @x: the last digit
 * Return: the last digit
 */
int print_last_digit(int x)
{
	int ld = x % 10;

	if (ld < 0)
		ld = ld * -1;

	_putchar(ld + '0');
	return (ld);
}
