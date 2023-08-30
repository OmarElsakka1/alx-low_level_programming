/**
* _sqrt - helper func
* @n: int
* @i: accumilator
* Return: sqrt(n)
*/

int _sqrt(int n, int i)
{
	if (i * i == n)
		return (i);

	if (i * i > n)
		return (-1);

	return (_sqrt(n, i + 1));

}

/**
* _sqrt_recursion - returns sqrt
* @n: int
* Return: sqrt(n)
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (_sqrt(n, 0));
}
