#include <stdio.h>
#include "main.h"
/**
* print_array - Prints the string in reverse order
* @a: string to be reversed
* @n: number of elements to be printed
* return: void
* description: does the shit
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n > 0)
		{
			if (i < n - 1)
				printf("%d, ", a[i]);
			else
				printf("%d", a[i]);
		}
	}
	printf("\n");
}
