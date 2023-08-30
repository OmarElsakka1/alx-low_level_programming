/**
* _prime_helper - check if number is prime
* @n: int
* @i: itterator
* Return: 1 if prime, 0 if not
*/
int _prime_helper(int n, int i)
{
	if (i == n)
		return (1);
	if (n % i == 0)
		return (0);

	return (_prime_helper(n, i + 1));
}

/**
* is_prime_number - check if number is prime
* @n: int
* Return: 1 if prime, 0 if not
*/

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (_prime_helper(n, 2));
}
