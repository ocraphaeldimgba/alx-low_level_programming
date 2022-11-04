#include "main.h"
#include <stdio.h>

/**
 * _strchr - pointer to the first occurrence of the character
 * @s: in the string
 * @c: if not returned
 * Return: pointer or NULL
 */
char *_strchr(char *s, char c)
{
	if (s == NULL)
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
