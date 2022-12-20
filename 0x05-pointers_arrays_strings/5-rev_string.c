#include "main.h"
/**
 * rev_string - reverses the string
 * @s: the string
 * Return: reverse string
 */
void rev_string(char *s)
{
	char rv = s[0];
	int i = 0;
	int j;

	while (s[i] != '\0')
		i++;
	for (j = 0; j < i; j++)
	{
		i--;
		rv = s[j];
		s[j] = s[i];
		s[i] = rv;
	}
}
