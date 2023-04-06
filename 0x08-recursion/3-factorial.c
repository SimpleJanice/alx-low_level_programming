#include "main.h"
/**
* factorial - Calculate the factorial of a number
* @n: the number to the calculate the dactorial
*
* Return: integer value
*/
int factorial(int n)
{
if (n < 0)
return (-1);
if (n <= 1)
return (1);

return (n * factorial(n - 1));
}
