#include "main.h"

/**
 * string_toupper: lower to uppercase
 * @x: string char
 * Return - 0
 */
char *string_toupper(char *)
{
	int i = 0;

	while (x[i])
	{
		if (x[i] >= 97 && x[i] <= 122)
			x[i] = x[i] - 32;
		i++;
	}
	return (x);
}
