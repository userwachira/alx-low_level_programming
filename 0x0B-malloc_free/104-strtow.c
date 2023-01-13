#include "main.h"
/**
 * strtow - splits a string into words
 * @string: string
 * Return: pointer to array of strings
 */
char **strtow(char *str)
{
	int i, j, k, word_count, word_len;
	char **words;

	if (!str || !*str)
		return (NULL);
	
	while (*str == ' ')
		str++;

	word_count = 0;
	for (i = 0; str[i]; i++)
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
			word_count++;

	words = malloc((word_count + 1) * sizeof(char *));
	if (!words)
		return (NULL);

	j = 0;
	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ')
		{
			word_len = 0;
			for (k = 1; str[k] && str[k] != ' '; k++)
				word_len++;

			words[j] = malloc((word_len + 1) * sizeof(char));
			if (!words[j])
			{
				for (k = 0; k < j; k++)
					free(words[k]);
				free(words);
				return (NULL);
			}
			for (k = 0; k < word_len; k++)
				words[j][k] = str [i + k];
			words[j][word_len] = '\0';
			j++;
			i += word_len - 1;
		}
	}
	words[j] = NULL;
	return (words);
}
