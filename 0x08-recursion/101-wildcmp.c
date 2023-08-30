/**
* wildcmp - compares two strings ('*' is a wildcard)
* @s1: string 1
* @s2: string 2
* Return: 1 if equal, 0 otherwise
*/

int wildcmp(char *s1, char *s2)
{
	if (!*s1 && !*s2) /* both == '\0' aka end of str*/
		return (1);

	if (*s2 == '*')
		return (wildcmp(s1, s2 + 1) || (*s1 != '\0' && wildcmp(s1 + 1, s2)));

	if (*s1 == *s2) /* Proceed to next char if both were equal */
		return (wildcmp(s1 + 1, s2 + 1));

	return (0);
}
