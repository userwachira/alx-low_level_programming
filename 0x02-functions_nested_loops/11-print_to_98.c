#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints to 98
 * @n: the number
 * Return: 0
 */
void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
	{
		printf("%d", i);
		if (i < 98)
			printf(", ");
	}
	putchar('\n');
}
