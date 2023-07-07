#include "main.h"

/**
* get_bit - Function that returns the value of a bit at a given
* index.
* @n: unsigned long int inputs.
* @index: index of the bit.
*
* Return: value of the bit.
*/
int get_bit(unsigned long int n, unsigned int index)
{
unsigned int ix;

if (n == 0 && index < 64)
return (0);

for (ix = 0; ix <= 63; n >>= 1, ix++)
{
if (index == ix)
{
return (n & 1);
}
}

return (-1);
}
