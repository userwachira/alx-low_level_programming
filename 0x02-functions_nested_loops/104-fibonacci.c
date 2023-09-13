#include <stdio.h>
/**
 * printfirstnfibonacci - prints the first n fibonacci
 */
void printfirstnfibonacci(void)
{
	int i;
	long int a = 1, b = 2, next;
	int n = 100;

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
	printfirstnfibonacci();
	return (0);
}
