#include <stdio.h>
/**
 * main - Return lowercase and then upercase alphabet
 * ch: variable
 * Return: always zero
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'q' || ch == 'e')
			continue;
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
