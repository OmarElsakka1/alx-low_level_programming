#include<string.h>
/**
* _palend_helper - check if a string is palendrome
* @s: string
* @n: str len
* Return: 1 if palendrome, 0 if not
*/
int _palend_helper(char *s, int n)
{
	if (n == 1)
		return (1);
	if (n == 2 && s[0] == s[1])
		return (1);
	if (s[0] != s[n - 1])
		return (0);

	return (_palend_helper(s + 1, n - 2));
}

/**
* is_palindrome - check if a string is palendrome
* @s: string
* Return: 1 if palendrome, 0 if not
*/

int is_palindrome(char *s)
{
	int len = strlen(s);

	return (_palend_helper(s, len));
}
