#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* Return:Always (Success)
*
*/
int main(void)
{
        char low, e, q;
	
	e = 'e';
		q = 'q';
        for (low = 'a'; low <= 'z'; low++)
	{
		if (low != e && low != q)
			putchar(low);
	}
	putchar('\n');
	return (0);
}

