#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Defines value of string depending on the last value of n
 * Return: 0 (success)
 */
int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;
	printf("Last digit of %i is %i and is", n, last);
	/* your code goes there */
	if (last > 5)
	{
		printf("greater than 5\n");
	}
	else if (last < 6 && !0)
	{
		printf("less than 6 and not 0\n");
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
