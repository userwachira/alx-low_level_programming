#include <stdio.h>
/**
 * printevenfibonaccisum - prints fibonacci numbers
 */
void printevenfibonaccisum(void)
{
	int sum = 0, a = 1, b = 2, next;

	while (a < 4000000)
	{
		if ((a % 2) == 0)
		{
			sum += a;
		}

		next = a + b;
		a = b;
		b = next;
	}

	printf("%d\n", sum);
}
/**
 * main - entry point
 * Return: Always 0
 */
int main(void)
{
	printevenfibonaccisum();
	return (0);
}
