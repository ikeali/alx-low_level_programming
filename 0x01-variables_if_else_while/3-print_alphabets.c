#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main-Prints an alphabet in lowercase then in uppercase
* Return:Always (Success)
*
*/
int main(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
		putchar(low);
	for (low = 'A'; low <= 'Z'; low++)
		putchar(low);
	putchar('\n');
	return (0);
}
