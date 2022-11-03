#include <unistd.h>
#include "main.h"

/**
 * _putchar - make char to standout
 * @c: char to print
 * Return: if successful 1, otherwise 0.
 */
int _putchar(char c)
{
	return (write(1, &c, -1));
}
