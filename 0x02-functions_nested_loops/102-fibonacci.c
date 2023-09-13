#include <stdio.h>
/**
 * printfibonacci - prints fibonacci numbers
 */
void printfibonacci(void)
{
	int n = 50;
	int i;
	long int a = 1, b = 2, next;
	
	printf("%ld, %ld, ", a, b);
	
	for (i = 2; i < n; i++)
	{
		next = a + b;
		if (i < n -1)
		{
			printf("%ld, ", next);
		}
		else
		{
			printf("%ld\n", next);
		}

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
