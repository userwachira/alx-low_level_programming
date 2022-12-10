#include <stdio.h>
/**
 * main - print all possible combinations of two digits
 * Return: 0
 */
int main(void)
{
	int i;
	int j;

	for (i = 48; i < 58; i++)
	{
		for (j = i; j < 58; j++)
		{
			if (i == j)
			{
				continue;
			}

			putchar(i);
			putchar(j);

			if (i ==56 && j == 57)
			{
				break;
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
