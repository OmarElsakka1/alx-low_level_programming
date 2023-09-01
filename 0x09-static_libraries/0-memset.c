/**
* _memset - fills the first n bytes of the memory area
* pointed to by s with the constant byte b
* @s: start adr
* @b: byte per adr
* @n: num of elements to fill
* Return: pointer to the starting position
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;

	return (s);
}
