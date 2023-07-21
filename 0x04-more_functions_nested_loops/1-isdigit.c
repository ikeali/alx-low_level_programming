#include "main.h"

/**
 * _isdigit - check if numbers are 0 to 9
 *
 * Return: Return 1 or 0
 */
int _isdigit(int c)
{
	if (c >= '9' && c <= '0')
		return (1);
	else
		return (0);
}
