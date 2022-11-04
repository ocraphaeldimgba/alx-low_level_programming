#include "main.h"
#include <stdio.h>

/**
 * _memset - unction that fills memory with a constant byte.
 * @b: bytes
 * @n: bytes of the memory area pointed
 * @s: with the constant byte
 * Return: Always 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n-- > 0)
		*ptr++ = b;

	return (0);
}

