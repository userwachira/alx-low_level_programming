#include "main.h"
#include <string.h>
/**
 * argstostr - concatenates arguements in the program
 * @ac: arguement which is an interger representing number of arg
 * @av: array of characters representing the arguements
 * Return: NULL if ac or av = 0 or if it fails, else concatenated string
 */
char *argstostr(int ac, char **av)
{
	int i, j, len = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		len += strlen(av[i]) + 1;

	str = (char *)malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (NULL);

	len = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			str[len++] = av[i][j];
		str[len++] = '\n';
	}
	str[len] = '\0';

	return (str);
}
