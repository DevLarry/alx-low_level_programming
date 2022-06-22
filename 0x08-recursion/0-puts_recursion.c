#include "main.h"
/**
* _puts_recursion - Prints the string in reverse order
* @s: string to be reversed
* return: void
* description: does the shit
*/
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
