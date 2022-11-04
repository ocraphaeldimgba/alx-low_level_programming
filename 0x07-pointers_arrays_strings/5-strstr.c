#include "main.h"
#include <stdio.h>

/**
 * _strstr - function that locates a substring.
 * @haystack: in the string
 * @needle: function finds the first occurrence of the substring
 * Return: pointer to the beginning of the located substring, or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int point;

	for (; *haystack; haystack++)
	{
		for (point = 0; needle[point]; point++)
		{
			if (!(*(haystack + point)))
			{
				return (NULL);
			}
		if (*(haystack + point) != needle[point])
			break;
		}
		if (needle[point] == '\0')
			return (haystack);
	}
	return (NULL);
}
