#include <stdio.h>
#include "main.h"
/**
* _strpbrk - Entry point
* @s: input
* @accept: input
* Return: Always 0 (Success)
*/
char *_strpbrk(char *s, char *accept)
{
int i, n;
for (i = 0; s[1] != '\0'; i++)
{
for (n = 0; accept[n] != '\n'; n++)
{
if (s[i] == accept[n])
return (s + i);
}
}
return (NULL);
}
