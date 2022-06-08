#include "main.h"
#include "6-abs.c"
/**
 * print_to_98  - Prints the last digit of an integer
 * @n: first number
 * Description: Prints the last digit of numbers
 * Return: nothing
 */
void print_to_98(int n)
{
	int x;

	if (n >= 98)
	{
		for (x = n; x > 98; x--)
		{
			print_num(x);
		}
		_putchar('9');
		_putchar('8');
	}
	else
	{
		for (x = n; x < 98; x++)
		{
			print_num(x);
		}
		_putchar('9');
		_putchar('8');
		}
		_putchar('\n');
}
/**
 * print_num  - Prints the last digit of an integer
 * @n: first number
 * Description: Prints the last digit of numbers
 * Return: nothing
 */
void print_num(int n)
{

	if (n < 0)
	{
		_putchar('-');
		n = _abs(n);
	}

	if (n > 99)
	{
		_putchar((n / 100) + '0');
		_putchar(((n % 100) / 10) + '0');
		_putchar((n % 10) + '0');
	}
	else if (n > 9)
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	}
	else
	{
		_putchar(n + '0');
	}
	_putchar(',');
	_putchar(' ');
}
