#include "main.h"

/**
* flip_bits - Function that returns the number of bits you would
* need to flip to get from one number to another
* @n: numbers one.
* @m: numbers two.
*
* Return: numbers of bits.
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int bts;

for (bts = 0; n || m; n >>= 1, m >>= 1)
{
if ((n & 1) != (m & 1))
bts++;
}

return (bts);
}
