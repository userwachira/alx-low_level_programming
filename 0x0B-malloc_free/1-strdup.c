#include "main.h"
#include <string.h>
/**
 * _strdup- returns a pointer to a newly allocated space in memory
 * @str: string
 * Returns: a pointer to duplicated string and NULL if memory allocation fails
 * else returns a pointer to the duplicated string
 */
char *_strdup(char *str)
{
	char *dup;
	int len;

	if (str == NULL)
		return (NULL);

	len = strlen(str);
	dup = malloc(sizeof(char) * (len + 1));
	if (dup == NULL)
		return (NULL);

	strcpy(dup, str);

	return (dup);
}
