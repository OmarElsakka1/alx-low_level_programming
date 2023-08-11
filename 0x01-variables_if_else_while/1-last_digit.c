#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Where we start
* Short Description - It is just a comparing function.
* Description: Prints whether the number is positive or negative
* Return: 0
*/

int main(void)
{
        int n,num;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	num = n%10;
	if (n == 0)
	  printf("Last digit of %d is 0 and is 0\n",n);

	if (n < 0)
	  num = num * -1;
	else if (num >5)
	  printf("Last digit of %d is %d and is greater than 5\n",n, num);
	else
	  printf("Last digit of %d is %d and is less than 6 and not 0\n",n, num);

	return (0);
}
