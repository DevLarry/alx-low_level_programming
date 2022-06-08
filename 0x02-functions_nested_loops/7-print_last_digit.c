#include "6-abs.c"

/**
 * print_last_digit  - Prints the last digit of an integer
 * @n: the number to be evaluated
 * Description: Prints the last digit of numbers
 * Return: returns the last digit (int)
 */
int print_last_digit(int n)
{
	int r = _abs(n % 10);
	return (r);
}
