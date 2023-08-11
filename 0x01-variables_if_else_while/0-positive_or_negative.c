#include <stdlib.h>
#include <time.h>
/**
* main - Where we start
* Short Description - It is just a comparing function.
* Description: Prints whether the number is positive or negative
* Return: 0
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
		printf("%d is zero\n", n);
	else if (n > 0)
		printf("%d is positive\n", n);
	else
		printf("%d is negative\n", n);

	return (0);
}
