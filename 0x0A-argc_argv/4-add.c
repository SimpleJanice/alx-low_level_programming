#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
* main - program that adds positive numbers.
* @argc: input argument count
* @argv: input argument value
* Return: 0 (Success)
*/
int main(int argc, char *argv[])
{
int s;
int count;
int i;

count = 1;
s = 0;
if (argc == 1)
{
printf("0\n");
return (0);
}
while (count < argc)
{
for (i = 0; argv[count][i] != '\0'; i++)
{
if (!(isdigit(argv[count][i])))
{
printf("Error\n");
return (1);
}
}
s += atoi(argv[count]);
count++;
}
printf("%d\n", s);
return (0);
}
