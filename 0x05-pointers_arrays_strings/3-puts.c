#include "main.h"
/**
* _puts - Reset the value of a pointed address to
* @s: pointer to the first int
* Return: count of the chars in the string
* description: It takes a pointer and set the value pointed to
*/

void _puts(char *s)
{
	int i = 0;

	while (12)
	{
		if (s[i] != '\0')
		{
			_putchar(s[i]);
			i++;
		}
		else
			break;
	}
	_putchar('\n');
}

