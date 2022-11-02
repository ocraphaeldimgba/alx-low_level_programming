#include "main.h"

/**
 * _isdigit: checks if a char is a digit
 * @c: int to check
 * Return: if successful 1, otherwise 0
 */
int _isdigit(int c);
{
	int y = 0;

	if (c >= '0' && c <= '9')
		y = 1;

	return (y);
}
