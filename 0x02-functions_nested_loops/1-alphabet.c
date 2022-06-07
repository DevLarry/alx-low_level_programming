#include <stdio.h>
#ifndef MAIN_H
#include "main.h"
#endif
/**
 * print_alphabet  - prints all the lower case alphabet and a new line
 *
 * Return: Always 0
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
