#include "main.h"
#include <stdio.h>

/**
 * _strchr - pointer to the first occurrence of the character
 * @c: in the string
 * @s: if not returned
 * Return: NULL
 */
char *_strchr(char *s, char c)
{
	if (S == NULL)
		return (NULL);
	for (; *s; s++)
	{
		if (*s == c)
			return (s);
	}
	if (*s == c)
	{
		return (s);
	}
	return (NULL);
}
