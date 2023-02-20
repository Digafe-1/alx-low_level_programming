#include <stdio.h>
/**
 * main - Return lower case alphabet in revers
 * ch: variable
 * Return: always zero
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
		putchar(ch);
	putchar('\n');
	return (0);
}
