#include "main.h"
#include <stdio.h>

/**
 * _strlen - function that returns the length of a string.
 * @s: number in length
 * Return: Always 0
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (0);
}
