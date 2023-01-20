#include "3-calc.h"
/**
 * main - perform simple operations
 * @agrc: number of arguements
 * @agrv: array of arguements
 * Return: 0 on success, 98, 99, or 100 on error
 */
int main(int agrc, char *agrv[])
{
	int a, b;
	int (*op)(int, int);

	if (agrc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(agrv[1]);
	b = atoi(agrv[3]);
	
	printf("%d\n", op(a,b));

	if (op == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((*agrv[2] == '/' || *agrv[2] == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (0);
}
