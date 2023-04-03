#include "main.h"
/**
* _strpbrk - function that searches a string for any of a set of bytes.
* @s: input
* @accept: input
* Return: Always 0 (Success)
*/
char *_strpbrk(char *s, char *accept)
{
int q;

while (*s)
{
for (q = 0; accept[q]; q++)
{
if (*s == accept[q])
return (s);
}
s++;
}

return ('\0');

