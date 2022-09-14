#include <stdio.h>
/**
 * Main - Print lower alphabet
 *
 * Description - Use the main function
 * this prints lower cases of alphabet
 * Return - 0 (Success0
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);

	putchar('\n');
	return (0);
}
