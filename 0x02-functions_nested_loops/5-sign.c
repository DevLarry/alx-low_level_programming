/**
 * _isalpha  - checks if a character is an alphabet
 * @c: takes a character
 * Description: Checks whether the character(c) is an alphabet
 * Return: 1 if c is an alphabet an returns 0 otherwise
 */
int _isalpha(char c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}

	return (0);
}
