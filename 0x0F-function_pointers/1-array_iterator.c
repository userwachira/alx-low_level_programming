#include "function_pointers.h"
/**
 * array_iterator - execute a function given as a parameter in array elements
 * @array: the array
 * @size: number of elements in the array
 * @action: pointer to the function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
