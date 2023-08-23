/**
* _atoi - converts sting to int
* @s: string
* Return: int value of the string
*/

int _atoi(char *s)
{
	unsigned int result = 0;
	int sign = 1, i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		else if ((int)s[i] >= 0 && (int)s[i] <= 9)
		{
			result *= 10;
			result += ((int)s[i] - 0);
		}
		else if (result > 0)
			break;
		i++;
	}
	return (sign * result);
}
