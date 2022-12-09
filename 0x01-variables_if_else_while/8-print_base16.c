#include <stdio.h>
/**
 * main - Print all numbers of base 16 in lowercase
 * Return: 0
 */
int main(void)
{
	int i;
	char ch;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	for (ch = 'a'; ch <= 'f'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
