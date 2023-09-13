#include <stdio.h>
/**
 * printfirstnfibonacci - prints the first n fibonacci
 */
void printfirstnfibonacci(void)
{
	int i;
	unsigned long a = 1, b = 2, next;
	int n = 98;

	printf("%lu, %lu, ", a, b);

	for (i = 0; i < n; i++)
	{
		next = a + b;
		if (i < n - 1)
		{
			printf("%lu, ", next);
		}
		else
		{
			printf("%lu\n", next);
		}

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
	printfirstnfibonacci();
	return (0);
}
