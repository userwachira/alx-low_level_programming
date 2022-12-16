#include "main.h"
/**
 * _islower - checks for lower case characters
 * @c: the character
 * Return: 1 if c is lowercase
 */
int _islower(int c)
{
	int c;

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
