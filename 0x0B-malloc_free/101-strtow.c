#include "main.h"
#include <stdlib.h>

int word_len(char *str);
int count_words(char *str);
char **strtow(char *str);

/**
 * word_len - locates the index marking end of first contasned within a string.
 * @str: the string to be search.
 * Return: The index marking the end of the initial word painted to by str.
 */
int word_len(char *str)
{
	int index = 0, len = 0;

	while (*(str + index) && *(str + index) != ' ')
	{
		len++;
		index++;
	}
	return (len);
}
