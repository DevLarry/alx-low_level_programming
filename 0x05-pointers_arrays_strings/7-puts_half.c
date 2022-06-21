#include "main.h"
/**
* puts_half - Prints the string in reverse order
* @str: string to be reversed
* return: void
* description: does the shit
*/
void puts_half(char *str)
{
	int len = 0;
	int i = 0;
	int x;

	while (str[len] != '\0')
		len++;

	if (len % 2 == 0)
		x = len / 2;
	else
		x = (len + 1) / 2;

	for (i = x; i < len; i++)
		_putchar(str[i]);
	_putchar('\n');
}
