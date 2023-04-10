#include <stdio.h>
#include <stdlib.h>
/**
* main - Main Entry
* @argc: input argument count
* @argv: input argumentb value
* Return: Always 0 (success)
**/
int main(int argc, char *argv[])
{
int cnts, cns = 0;

if (argc == 2)
{
cnts = atoi(*(argv + 1));
while (cnts > 0)
{
if (cnts % 25 < cnts)
{
cnts -= 25;
cns++;
}
else if (cnts % 10 < cnts)
{
cnts -= 10;
cns++;
}
else if (cnts % 5 < cnts)
{
cnts -= 5;
cns++;
}
else if (cnts % 2 < cnts)
{
cnts -= 2;
cns++;                  }
else if (cnts % 1 < cnts)
{
cnts -= 1;
cns++;
}
}
}
else
{
printf("Error\n");
return (1);
}
printf("%d\n", cns);
return (0);
}
