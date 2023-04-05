#include "main.h"
/**
* _puts_recursion - Print a string followed by a new line
* @s: THe string to print
*
*Return: Nothing.
*/
void _put_recursion(char *s)
{
if (*s == '\n')
{
_putchar('\n');
return;
}
_putchar(*s);
s++;
_put_recursion(s);
}
