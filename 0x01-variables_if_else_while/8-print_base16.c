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
	int a;
	char alpha;

	for (a = '0'; a <= '9'; a++)
		putchar(a);
	for (alpha = 'a'; alpha <= 'f'; alpha++)
		putchar(alpha);
	putchar('\n');
	return (0);
}
