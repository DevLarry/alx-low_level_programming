#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - entry point
* Description: this is where all code is
* Return: 0
*/
int main(void)
{
	char alpha;

	for (alpha = 'z'; alpha >= 'a'; alpha--)
		putchar(alpha);
	putchar('\n');
	return (0);
}
