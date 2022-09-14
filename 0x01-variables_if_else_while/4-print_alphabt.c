#include <stdio.h>

/**
 * Main -Entry point
 *
 * Description - Write a program that prints the alphabet in lowercase, followed by a new line.
 * Return - 0 ( Success )
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
	}

	putchar('\n');

	return (0);
}
