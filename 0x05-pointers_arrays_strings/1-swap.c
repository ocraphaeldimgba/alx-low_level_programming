#include "main.h"
#include <stdio.h>

/**
 * swap_int - function that swaps the values of two integers
 * @a: replace with b
 * @b: replace with a
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int r;

	r = *a;
	*a = *b;
	*b = r;
}
