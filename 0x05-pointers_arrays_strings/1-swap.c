#include "main.h"
/**
 * swap_int - swaps the value of two integers
 * @a: one of the intergers
 * @b: the other interger
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
