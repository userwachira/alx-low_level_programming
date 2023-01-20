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
	
	if (agrv[2][1])
	{
		printf("Error\n");
		exit(99);
	}
	
	op = get_op_func(agrv[2]);

	if (op == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	a = atoi(agrv[1]);
	b = atoi(agrv[3]);
	
	printf("%d\n", op(a, b));
	return (0);
}
