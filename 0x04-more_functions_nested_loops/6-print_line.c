#include "main.h"
/**
* print_line - Draws a strsight line according to parameter
* @n: The number of times to draw
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
