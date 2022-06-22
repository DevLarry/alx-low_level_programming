#include "main.h"
/**
* _print_rev_recursion - Prints the string in reverse order
* @s: string to be reversed
* return: void
* description: does the shit
*/
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
