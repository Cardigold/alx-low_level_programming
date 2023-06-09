# include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: on success 1.
 * on error, -1 is returned, and errnon is set appropriately.
 */
int _
putchar(char c)
{
	return (write(1, &c, 1));
}
