#include "main.h"

/**
 * _isalpha - cheecks for alphabets
 * @c - character checks
 * Return - returns 0 or 1 depending on conditions
 */
int _isalpha(int c)
{
	return ((c >= 'a' && <= 'z') || (c >= 'A' && c <= 'Z'))
}
