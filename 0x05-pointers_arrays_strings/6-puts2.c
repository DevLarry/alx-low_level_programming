#include "main.h"
/**
* puts2 - Prints the string in reverse order
* @str: string to be reversed
* return: void
* description: does the shit
*/
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}

		i++;
	}
	_putchar('\n');
}
