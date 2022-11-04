#include "main.h"
#include <stdio.h>

/**
 * _memcpy - function that copies
 * @dest: copy to
 * @src: in the string s
 * @n: number to copy
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr = dest;

	while (n-- > 0)
	{
		*dest = *src;
		dest++;
		src++;
	}
	return (ptr);
}
