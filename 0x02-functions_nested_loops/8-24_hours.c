#include "main.h"
#include "_putchar.c"
/**
 * jack_bauer  - Prints the last digit of an integer
 * @n: the number to be evaluated
 * Description: Prints the last digit of numbers
 * Return: returns the last digit (int)
 */
void jack_bauer(void)
{
	int i, j;
	
	for (i = 0; i < 23; i++)
	{
		for (j = 0; j < 59; j++)
		{
			if(i < 10)
			{
				_putchar('0');
				_putchar(i + '0');
			}
			else
			{
				_putchar(i + '0');
			}
			_putchar(':');
			if(j < 10)
			{
				_putchar('0');
				_putchar(j + '0');
			}
			else
			{
				_putchar(j + '0');
			}
		}
	}
}
