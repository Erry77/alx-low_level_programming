#include <stdio.h>

/**
 * main - gives upper and lowercase character
 * and print the lowercase letters
 * int main function ends
 * Return 0 Always return lowercase and uppercase
 */
int main(void)
{
int ch;
for (ch = 97; ch <= 122; ch++)
{
putchar(ch);
}
for (ch = 65; ch <= 90; ch++)
{
putchar(ch);
}
putchar(10);

return (0);
}
