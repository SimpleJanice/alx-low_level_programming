#include "main.h"

/**
* clear_bit - Function that sets the value of a bit to 0.
* at a givens index.
* @n: pointers of an unsigned long int.
* @index: index of the bit.
*
* Return: 1 if it worked, -1 if it didn't.
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned int mn;

if (index > 63)
return (-1);

mn = 1 << index;

if (*n & mn)
*n ^= mn;

return (1);
}
