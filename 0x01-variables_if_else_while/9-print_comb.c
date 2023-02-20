#include <stdio.h>
/**
 * main - Return all possible combinations of single-digit numbers
 * i: variable
 * Return: always zero
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar('0' + i);
		if (i == 9)
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
