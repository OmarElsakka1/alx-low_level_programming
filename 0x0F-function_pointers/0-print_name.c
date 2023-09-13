/**
 * print_name - prints a name
 * @name: string holding name
 * @f: pointer to a function that takes a name and returns void
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (f)
		f(name);
}
