/**
* _memcpy - copies n bytes from memory area src to memory area dest
* @n: n bytes
* @src: start adr
* @dest: dest ptr
* Return: pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
