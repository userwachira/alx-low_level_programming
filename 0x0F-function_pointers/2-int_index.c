#include "function_pointers.h"
/**
 * int_index - search for integers in array
 * @array: array to search
 * @size: number of elements in array
 * @cmp: pointer to function comparing values
 * Return: index of elementc cmp does not return 0, or -1 if no element
 * match or size<=0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || size <= 0 || !cmp)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
