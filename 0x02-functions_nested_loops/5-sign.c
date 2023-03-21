#include "main.h"
/**
* print_sign - function that prints sign
*
* @n: the int to check
*
* Return: 1 for positive n, -1 for negative and 0 for anything
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
