#include "main.h"
#include <stdio.h>

/**
 * _memset - unction that fills memory with a constant byte.
 * @s: bytes
 * @b: bytes of the memory area pointed
 * @n: with the constant byte
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n-- > 0)
		*ptr++ = b;

	return (s);
}

