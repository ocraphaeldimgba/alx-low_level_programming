#include "main.h"

/**
 * _isalphabet - cheecks for alphabets
 * @c - character checks
 * Return - returns 0 or 1 depending on conditions
 */
int _isalphabet(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
