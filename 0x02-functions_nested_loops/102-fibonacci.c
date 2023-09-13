#include <stdio.h>
/**
 * printfibonacci - prints fibonacci numbers
 */
void printfibonacci(void)
{
	int n = 50;
	int i, a = 1, b = 2, next;

	for (i = 0; i < n; i++)
	{
		if (i < n - 1)
		{
			printf("%d, ", a);
		}
		else
		{
			printf("%d\n", a);
		}

		next = a + b;
		a = b;
		b = next;

	}
}
/**
 * main - entry point
 * Return: always 0
 */
int main(void)
{
	printfibonacci();
	return (0);
}
