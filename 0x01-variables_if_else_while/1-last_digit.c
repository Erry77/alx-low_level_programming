#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * int main -Entry point of the program describing it as an interger function
 * variable name is n
 *
 * the function int main represents intergers only
 * Always return zero at the end of the program
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 
printf("Last digit of %d is ",n);
if (n > 5)
{
	printf("greater than 5");
}
if (n == 0)
{
	printf("greater than 5");
}
if (n < 6 && n !=0)
{
	printf("less than 6 not 0");
}
printf("\n");
return (0);
}
