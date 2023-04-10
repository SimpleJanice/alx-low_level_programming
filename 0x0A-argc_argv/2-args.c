#include <stdio.h>
/**
* main - program that prints all arguments it receives.
* @argc: input argument count
* @argv: input argument value
* Return: 0 (success)
*/
int main(int argc, char *argv[])
{
int cn;
for (cn = 0; cn < argc; cn++)
{
printf("%s\n", argv[cn]);
}
return (0);
}
