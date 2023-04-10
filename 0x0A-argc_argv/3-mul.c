#include <stdio.h>
#include "main.h"

/**
* _atoi - converts a string to an integer
* @s: string to be converted in function
*
* Return: the int converted from the string
*/
int _atoi(char *s)
{
int i, d, n, len, fi, digit;

i = 0;
d = 0;
n = 0;
len = 0;
fi = 0;
digit = 0;

while (s[len] != '\0')
len++;

while (i < len && fi == 0)
{
if (s[i] == '-')
++d;

if (s[i] >= '0' && s[i] <= '9')
{
digit = s[i] - '0';
if (d % 2)
digit = -digit;
n = n * 10 + digit;
fi = 1;
if (s[i + 1] < '0' || s[i + 1] > '9')
break;
fi = 0;
}
i++;
}

if (fi == 0)
return (0);

return (n);
}

/**
* main - multiplies two numbers
* @argc: input number of arguments
* @argv: input array of arguments
*
* Return: 0 (Success), 1 (Error)
*/
int main(int argc, char *argv[])
{
int result, num1, num2;

if (argc < 3 || argc > 3)
{
printf("Error\n");
return (0);
}

num1 = _atoi(argv[1]);
num2 = _atoi(argv[2]);
result = num1 *num2;

printf("%d\n", result);

return (0);
}
