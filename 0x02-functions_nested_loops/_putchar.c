#include<unistd.h>
/**
 * _putchar - writes the character c to studout
 * @c: The character to print
 * Return: On Success 1
 * On error -1 is returned, and error is set appropriately
 */
int _putchar(char c)
{
        return (write(1, &c, 1));
}
