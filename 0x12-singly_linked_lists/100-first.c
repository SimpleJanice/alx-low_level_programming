#include <stdio.h>
void frist(void)__attribute__((constructor));

/**
* frist - prints a sentence before the main
* function is executes
*/
void frist(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
