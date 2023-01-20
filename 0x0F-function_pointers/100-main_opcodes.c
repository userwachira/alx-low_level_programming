#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints opcodes of its own functions
 * @agrc: number of command line arguements
 * @agrv: array of command line arguements
 * Return: 0 on success, 1 or 2 on error
 */
int main(int agrc, char *agrv[])
{
	int i, n;
	char *main_ptr = (char *)main;

	if (agrc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	n = atoi(agrv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < n; i++)
		printf("%02hhx\n", main_ptr[i]);

	return (0);
}
