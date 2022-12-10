#include <stdio.h>
/**
 * main - print all possible combinations of two digits
 * Return: 0
 */
int main(void)
{
	int i;
	int j;
	
	i = 48;
	while (i < 58)
	{
		j = 48;
		while (j < 58)
		{
			putchar(i);
			putchar(j);
			j++;
			putchar(',');
			putchar(' ');
		}
		
		i++;
	}
	putchar('\n');
	return (0);
}
