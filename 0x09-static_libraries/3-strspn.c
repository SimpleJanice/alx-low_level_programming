#include "main.h"
/**
* _strspn - function that gets the length of a prefix substring.
* @s: input
* @accept: input
* Return: Always 0 (Success)
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int n = 0;
int cn;

while (*s)
{
for (cn = 0; accept[cn]; cn++)
{
if (*s == accept[cn])
{
n++;
break;
}
else if (accept[cn + 1] == '\0')
return (n);
}
s++;
}
return (n);
}
