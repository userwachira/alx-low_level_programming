#include "main.h"
/**
 * create_array - creates an array of characters
 * @size: size of array
 * @c: character
 * Return: NULL if size is 0 and pointer to an array if null fails
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
