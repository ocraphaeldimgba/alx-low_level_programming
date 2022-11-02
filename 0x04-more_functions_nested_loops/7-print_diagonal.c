#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - function that draws a diagonal line on the terminal '\'
 * @n: numbers of '\' to be printed
 */
void print_diagonal(int n)
{
	int x, y;

	if (n <= 0)
		_putchar('\n');

	for (x = 0; x < n; x++)
	{
		for (y = 0; y < x; y++)
			_putchar(' ');

		_putchar('\\');
		_putchar('\n');
	}
}