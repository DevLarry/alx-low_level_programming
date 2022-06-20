/**
* swap_int - Reset the value of a pointed address to 98
* @n: pointer to the first int
* @m: pointer to the second int
* description: It takes a pointer and set the value pointed to 98
*/

void swap_int(int *n, int *m)
{
	int x;

	x = *n;
	*n = *m;
	*m = x;
}

