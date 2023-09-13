#include <stdio.h>
/**
 * sumofmultiples - finds the sum of multiples
 * Return: sum
 */
int sumofmultiples(void)
{
	int a, b, sum1 = 0, sum2 = 0, sum3 = 0;

	for (a = 0; a < 1024; a += 3)
	{
		sum1 += a;
	}

	for (b = 0; b < 1024; b += 5)
	{
		sum2 += b;
	}

	sum3 = sum1 + sum2;
	return (sum3);
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
