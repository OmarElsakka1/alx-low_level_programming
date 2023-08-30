/**
* _strlen_recursion - returns string length
* @s: string
* Return: srting length
*/

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}
