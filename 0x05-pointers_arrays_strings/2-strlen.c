#include "main.h"
/**
 * _strlen - returns the length of the string
 * @s: the string
 */
int _strlen(char *s)
{
	int len = 0;
	
	while (*s != '\0')
	{
		len++;
		s++;
	}
}
