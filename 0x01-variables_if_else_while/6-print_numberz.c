#include <stdio.h>
/**
 * main - print numbers to base 10
 * Return:0
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}