#include "main.h"
#include "2-strlen.c"

/**
* print_rev - Prints the string in reverse order
* @s: string to be reversed
* return: void
* description: does the shit
*/

void print_rev(char *s)
{
	int strl = _strlen(s) - 1;
	int i;

	for (i = strl; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
