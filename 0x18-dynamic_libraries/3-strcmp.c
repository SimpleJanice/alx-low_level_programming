#include "main.h"
/**
* _strcmp - Compares pointers to two strings.
* @s1: A pointer to be first string to be compared.
* @s2: A pointer to be second string to be compared.
* Return: If str1 < str2, the negative  of the first unmatched character.
* if str1 == str2, 0.
* If str1 > str2, the positive difference of the first unmatched characters.
*/
int _strcmp(char *s1, char *s2)
{
while (*s1 && *s2 && *s1 == *s2)
{
s1++;
s2++;
}
return (*s1 - *s2);
}
