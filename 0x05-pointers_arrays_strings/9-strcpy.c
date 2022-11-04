#include "main.h"
#include <stdio.h>

/**
 * _strcpy - unction that copies the string pointed to by src
 * @dest: buffer pointed to
 * @src: unction that copies the string pointed to by src
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int len = 0;

	while (*(src + len) != '\0')
	{
		*(dest + len) = *(src + len);
		len++;
	}

	*(dest + len) = '\0';
	return (dest);
}