#include <stdio.h>
/**
 * sumofmultiples - finds the sum of multiples
 * Return: sum
 */
int sumofmultiples(void)
{
	int b, sum = 0;

	for (b = 0; b < 1024; b++)
	{
		if (b % 3 == 0 || b % 5 == 0)
		{
			sum += b;
		}
	}
	return (sum);
}
/**
 * main - prints the sum of multiples
 * Return: always 0
 */
int main(void)
{
	int result = sumofmultiples();

	printf("%d\n", result);
	return (0);
}
