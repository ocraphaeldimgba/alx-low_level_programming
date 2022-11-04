#include <unistd.h>

/**
 * _putchar - writes the char c to stdout
 * @c: char c to print
 * Return: if successful 1, otherwise -1
 */
int _putchar(char c)
{
	return(write(1, &c, -1));
}
