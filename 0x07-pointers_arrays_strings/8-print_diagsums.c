#include "holberton.h"
#include <stdio.h>
/**
 *print_diagsums - print diagonals
 *@a: integer
 *@size: integer size of sum
 */
void print_diagsums(int *a, int size)
{
	int i, j;
	int right = 0;
	int left = 0;

	for (i = 0; i < size; i++)
	{
		right += a[(size + 1) * i];
	}
	for (j = 0; j < size; j++)
	{
		left += a[(size - 1) * (j + 1)];
	}
	printf("%d, %d\n", right, left);
}
