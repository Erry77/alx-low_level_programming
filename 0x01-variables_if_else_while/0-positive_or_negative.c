#include <stdlib.h>
#include <stdlib.h>
#include <time.h>
/**
 * function name is int main prints any interger main
 * interger variable name
 *
 * positive intergers only
 * more headers goes there
 * always Return (0) to end the functions.
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is positive\n", n);

}
else if (n == 0)
{
printf("%d is zero\n", n);

}
else if (n < 0)
{
printf("%d is zero\n", n);

}
return (0);

}
