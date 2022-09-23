#include "main.h"
#include <string.h>

/**
 * _strncpy - function for copy
 * @dest: char1
 * @src: char2
 * @n: char3
 * Return: string
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
