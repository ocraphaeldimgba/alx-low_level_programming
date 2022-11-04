#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - unction that searches a string for any of a set of bytes
 * @s: function locates the first occurrence in the string
 * @accept: any of the bytes in the string
 * Return: a pointer to the byte in s or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	char c, *p;

	for (c = *s; c != 0; s++, c = *s)
	{
		for (p = accept; *p != 0; p++)
		{
			if (c == *p)
			{
				return (s);
			}
		}
	}
	return (0);
}
