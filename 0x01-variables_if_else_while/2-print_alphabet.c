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
char ch;
for (ch = 'a' ; ch <= 'z' ; ch++)
{
	putchar(ch);
}
putchar("\n");
return (0);
}
