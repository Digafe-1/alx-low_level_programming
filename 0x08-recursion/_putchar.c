#include <unistd.h>

/**
 * _putchar - This my putchar.
 * @c: character to be print
 * Return: on success 1 on error -1
 */
int _putchar(char c)
{
	return (write(STDOUT_FILENO, &c, 1));
}
