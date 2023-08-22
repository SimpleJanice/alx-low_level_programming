#include "main.h"
/**
* _strchr - main file
* @s: input
* @c: input
* Return: 0
*/
char *_strchr(char *s, char c)
{
int inte;

for (inte = 0; s[inte] >= '\0'; inte++)
{
if (s[inte] == c)
{
return (&s[inte]);
}
}
return (0);
}
