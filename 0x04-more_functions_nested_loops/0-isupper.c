#include "main.h"
#include <stdio.h>

/**
 * _isupper - check the code for upper code
 * @c: character to check
 *
 * Return: 1 if character is uppercase, 0 if otherwise.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
