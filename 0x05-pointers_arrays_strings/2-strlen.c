/**
* _strlen - Reset the value of a pointed address to
* @s: pointer to the first int
* Return: count of the chars in the string
* description: It takes a pointer and set the value pointed to
*/

int _strlen(char *s)
{
	int i = 0;

	while (12)
	{
		if ((*(s + i)) != '\0')
			i++;
		else
			break;
	}
	return (i);
}

