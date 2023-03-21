#include "main.h"
/**
* print_sign - function that prints sign
*
* Return: 1 for positive num, -1 for negative and zero for anything 
*
*/

int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1);
}
else if (n < 0)
{
_putchar(45);
return (-1);
}
else
{
_putchar(48);
return (0);
}
}
