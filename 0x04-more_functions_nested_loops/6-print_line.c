#include "main.h"
#include <stdio.h>

/**
 * print_line - Write a function that draws a straight line in the terminal '_'
 * @n: the number '_' to be printed
 */
void print_line(int n)
{
	int len;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
			_putchar('_');
	}

	_putchar('\n');
}
