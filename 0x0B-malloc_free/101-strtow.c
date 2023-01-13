#include "main.h"
/**
 * strtow - splits string into words
 * @str: string
 * Return: NULL if function fails, string is null or empty else return pointer
 */
char **strtow(char *str)
{
	int i, j, k, words = 0, len = 0;
	char **arr;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			words++;
	}

	arr = (char **)malloc(sizeof(char *) * (words + 1));
	if (arr == NULL)
		return (NULL);

	for (i = 0, k = 0; str[i]; i++)
	{
		if (str[i] != ' ')
		{
			for (j = i; str[j] && str[j] != ' '; j++)
				len++;
			arr[k] = (char *)malloc(sizeof(char) * (len + 1));
			if (arr[k] == NULL)
			{
				for (; k >= 0; k--)
					free(arr[k]);
				free(arr);
				return (NULL);
			}
			for (j = 0; j < len; j++)
				arr[k][j] = str[i + j];
			arr[k++][len] = '\0';
			len = 0;
			i = i + j - 1;
		}
	}
	arr[k] = NULL;

	return (arr);
}

