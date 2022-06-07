/**
 * _islower  - prints all the lower case alphabet and a new line
 * @c: takes a chars
 * Description: Checks whether the character(c) is lowercase
 * Return: 1 if c is lowercase an returns 0 otherwise
 */
int _islower(char c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}

	return (0);
}
