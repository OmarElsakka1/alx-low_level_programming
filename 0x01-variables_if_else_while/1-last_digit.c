#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Where we start (Polarity random numbers)
* Short Description - It is just a comparing function
* Description: Prints whether positive or negative and higher or not
* Return of main is mainly 0.
*/
int main(void)
{
	int n, last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;
	printf("Last digit of %d is %d ", n, last);
	if (last == 0)
		printf("and is 0\n");
	else if (n > 0)
		printf("and is greater than 5\n");
	else
		printf("and is less than 6 and not 0\n");

	return (0);
}
