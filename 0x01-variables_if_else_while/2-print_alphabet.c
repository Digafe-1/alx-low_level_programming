#include < stdio.h>
/**
 * main Return lower case alphabet
 * ch: variable
 * Return: always zero
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
