#include <stdlib.h>
#include <time.h>
/**
 * main - Describe if n is zero, positive, or negative
 * Return: 0 (success)
 */
int main(void)
{
	int n;

	strand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%d is %s\n", n, "posiitive");
	}
	else if (n == 0)
	{
		printf("%d is %s\n", n, "zero");
	}
	else
	{
		printf("%d is %s\n", n, "negative");
	}
	return (0);

}
