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
		putchar(ch);
	for (ch = 'a'; ch <= 'z'; ch++)
                putchar(ch);
	putchar('\n');
	return (0);
}
