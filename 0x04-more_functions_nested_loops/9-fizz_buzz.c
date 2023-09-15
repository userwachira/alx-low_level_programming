#include <stdio.h>
/**
 * printnumbersto100 - prints numbers
 */
void printnumbersto100(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");
}
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	printnumbersto100();
	return (0);
}
