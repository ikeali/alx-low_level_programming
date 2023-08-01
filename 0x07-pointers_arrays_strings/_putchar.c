#include "main.h"
#include <unistd.h>
/**
 * _putcha - writes the character c to stdout
 * @c: the chracter to print
 * Return: On success 1
 * On error,  -1  is returned and erno is set appropraitely
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
