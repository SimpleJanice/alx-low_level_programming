#include "main.h"
/**
* print_line - Draws a straight line the terminal
* @n: number of times the character_should be printed
*/

void print_line(int n)
{
int x;
if (n <= 0)
{
_putchar('\n');
}
else 
{
for (x = 1; x < n; x++)
{
_putchar(95);
}
_putchar('\n');
}
}
