#include <stdio.h>
/**
 * main - Return all the numbers of base 16 in lowercase
 * i,j: variable
 * Return: always zero
 */
int main(void)
{
	int i;
	char j;

	for (i = 0; i <= 9; i++)
	{
		putchar('0' + i);
	}
	for (j = 'a'; j <= 'f'; j++)
        {
                putchar(j);
        }
	putchar('\n');
	return (0);
}
