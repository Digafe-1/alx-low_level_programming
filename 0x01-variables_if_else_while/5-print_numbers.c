#include <stdio.h>
/**
 * main - Return single digit number
 * i: variable
 * Return: always zero
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar('0' + i);
	}
	putchar('\n');
	return (0);
}
