#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers,
 * @a: Numbers must be separated by comma
 * @n: number of elements of the array to be printed
 */
void print_array(int *a, int n)
{
	int t;

	for (t = 0; t < n; t++)
	{
		printf("%d", a[t]);
		if (t != n - 1)
			printf(", ");
	}

	printf("\n");
}
