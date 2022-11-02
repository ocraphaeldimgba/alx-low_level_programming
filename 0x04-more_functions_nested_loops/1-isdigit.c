#include "main.h"
#include <stdio.h>

/**
 * _isdigit - function to check if a char (c) is a digit
 * @c: int to check
 *
 * Return: if successful 1, otherwise 0
 */
int _isdigit(int c)
{
	int y = 0;

	if (c >= '0' && c <= '9')
		y = 1;

	return (y);
}
