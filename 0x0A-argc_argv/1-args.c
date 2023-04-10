#include <stdio.h>
/**
* main - program that prints the number of arguments passed into it.
* @argc: input argument on count char
* @argv: input argument on value char
* Return: 0 (Success)
*/
int main(int argc, char *argv[])
{
(void)argv;
printf("%d\n", (argc - 1));
return (0);
}
