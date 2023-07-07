#include "main.h"

/**
* binary_to_uint - Function converts a binary numbers
* unsigned int.
* @b: binary.
*
* Return: unsigned int.
*/
unsigned int binary_to_uint(const char *b)
{
unsigned int uim;
int lens, base_two;

if (!b)
return (0);

uim = 0;

for (lens = 0; b[lens] != '\0'; lens++)
;

for (lens--, base_two = 1; lens >= 0; lens--, base_two *= 2)
{
if (b[lens] != '0' && b[lens] != '1')
{
return (0);
}

if (b[lens] & 1)
{
uim += base_two;
}
}

return (uim);
}
