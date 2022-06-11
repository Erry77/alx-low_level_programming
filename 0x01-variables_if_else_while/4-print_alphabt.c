#include <stdio.h>

/**
 * main - assign a random number to the variable n each
 * and print the lowercase letters
 *
 * Return 0 Always return zero
 */
int main(void)
{
int ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
if(ch != 'q' && ch != 'e')
{
putchar(ch);
}
}
putchar(10);

return (0);
}
