/**
* reverse_array - reverse array
* @a: arr
* @n: length of arr
* Return: void
*/

void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0, j = n - 1; j > i; i++, j--)
	{
		int tmp = a[i];

		a[i] = a[j];
		a[j] = tmp;
	}
}
