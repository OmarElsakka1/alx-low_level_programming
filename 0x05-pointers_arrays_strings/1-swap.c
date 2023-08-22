/**
 * swap_int - swaps 2 pointers point at two ints
 * @a: First address
 * @b: Second address
 * Return: void
*/

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
