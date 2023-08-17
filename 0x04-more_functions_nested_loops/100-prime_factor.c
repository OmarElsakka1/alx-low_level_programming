#include<stdio.h>
#include<math.h>
/**
 * main - entry point
 * Description: return largest prime factor of 612852475143
 * Return: 0
*/
int main(void)
{
	unsigned long num = 612852475143;
	unsigned long  i, largest;

	for (i = 3; i <= sqrt(num); i += 2)
		while (num % i == 0)
		{
			num /= i;
			largest = i;
		}

	if (num > 2)
		largest = num;

	printf("%lu\n", largest);
	return (0);
}
