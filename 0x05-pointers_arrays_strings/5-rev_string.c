#include "main.h"
#include "2-strlen.c"

/**
* rev_string - Prints the string in reverse order
* @s: string to be reversed
* return: void
* description: does the shit
*/

void rev_string(char *s)
{
	int len = 0;
	int i = 0;
	char ex;

	while (s[len] != '\0')
	{
		len++;
	}

	while (i < len--)
	{
		ex = s[i];
		s[i++] = s[len];
		s[len] = ex;
	}
}
