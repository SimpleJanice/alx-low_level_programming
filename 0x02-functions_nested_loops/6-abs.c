#include "main.h"
/**
* _abs - Computer the absolute valve of an integer.
*
* Return: 0 Absolute value of number or zero
*/
int _abs(int c) 
{
if (c < 0)
{ 
int abs_val = c * -1;
return (abs_val);
}
return (0);
}
