#include "3-calc.h"
/**
 * main - perform simple operations
 * @agrc: number of arguements
 * @agrv: array of arguements
 * Return: 0 on success, 98, 99, or 100 on error
 */
int main(int agrc, char *agrv[])
{
	int num1, num2, result;
	int (*op_func)(int, int);

	if (agrc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(agrv[1]);
	num2 = atoi(agrv[3]);
	op_func = get_op_func(agrv[2]);

	if (op_func == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((*agrv[2] == '/' || *agrv[2] == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = op_func(num1, num2);
	printf("%d\n", result);

	return (0);
}
