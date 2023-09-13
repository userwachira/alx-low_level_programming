#include <stdio.h>
/**
 * printfirst98fibonacci - prints the first 98 fibonacci
 */
void printfirst98fibonacci(void)
{
	int i;
	long int a = 1, b = 2, next;
	int n = 98;

	for (i = 0; i < n; i++)
	{
		if (i < n - 1)
		{
			printf("%ld, ", a);
		}
		else
		{
			printf("%ld\n", a);
		}

		next = a + b;
		a = b;
		b = next;
	}
}
/**
 * main - entry point
 * Return: Always 0
 */
int main(void)
{
	printfirst98fibonacci();
	return (0);
}
