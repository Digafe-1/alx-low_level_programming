#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: imput value
 * @src: imput value
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	1 = 0;
	while (dest[1] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[1] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
