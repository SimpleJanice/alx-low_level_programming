#include "main.h"
#include <stdio.h>
/**
* print_diagsums - description
* @a: 2d array of int type
* @size: size of array
*/

void print_diagsums(int *a, int size)
{
int m, sum1 = 0, sum2 = 0;

for (m = 0; m < size; m++)
{
sum1 += a[m];
sum2 += a[size - m - 1];
a += size;
}
printf("%d, ", sum1);
printf("%d\n", sum2);
}
