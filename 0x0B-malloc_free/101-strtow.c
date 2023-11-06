#include <stdlib.h>
#include "main.h"
/**
 * count_word - helper function to count the number of words in a string
 * @s: string to evaluate
 *
 * Return: number of words
 */
char **strtow(char *str)
{
	char **matrix, *temp;
	int i,k = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;

	words = count_word(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
	{
		if (c)
		{
			end = i;
			tmp = (char *) malloc(sizeof(char) * (c + 1));
			if (tmp == NULL)
				return (NULL);
			while (start < end)
				*tmp++ = str[start++];
			*tmp = '\0';

			matrix[k] = tmp - c;

			k++;

			c = 0;
		}
		else if (c++ == 0)
			start = i;
	}
	matrix[k] = NULL;
	return (matrix);
	

	
}
