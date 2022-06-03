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

	for (a = '0'; a <= '9'; a++)
	{
		putchar(a);
		if (a != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
