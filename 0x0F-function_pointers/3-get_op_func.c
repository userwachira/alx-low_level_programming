#include "3-calc.h"
/**
 * get_op_func - select correct operation function
 * @s: operator passed by arguement to the program
 * Return: pointer to function corresponding to operator
 * given as parameter
 */
int (*get_op_func(char *s))(int, int)
{
	opt_ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i;

	i = 0;
	while (i < 5)
	{
		if (*(ops[i]).op == *s)
			return (ops[i].f);
		i++;
	}

	return (NULL);
}
