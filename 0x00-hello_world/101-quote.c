#include<stdio.h>
/**
* main - Where we start
* Short Description - It is just a printing function.
* Description: Prints an error messaage in the standard error
* Return: 0
*/

int main(void)
{
char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(STDOUT_FILENO, msg, sizeof(msg) - 1);
return (1);
}
