#include <stdio.h>
#include "main.h"
#include "1-alphabet.c"
/**
 * print_alphabet_x10  - prints all the lower case alphabet and a new line
 * Description: Uses _putchar from the print_alphabet
 * function to Print all lowercase letters 10 times
 * Return: Nothing.
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		print_alphabet();
	}
}
