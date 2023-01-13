#include "main.h"
/**
 * str_concat - concatenates two strings
 * @s1: string
 * @s2: string
 * Return: NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i, size1 = 0, size2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		size1++;
	for (i = 0; s2[i] != '\0'; i++)
		size2++;

	concat = malloc((size1 + size2 + 1) * sizeof(char));
	if (concat == NULL)
		return (NULL);

	for (i = 0; i < size1; i++)
		concat[i] = s1[i];

	for (i = 0; i < size2; i++)
		concat[size1 + i] = s2[i];

	concat[size1 + size2] = '\0';

	return (concat);
}
