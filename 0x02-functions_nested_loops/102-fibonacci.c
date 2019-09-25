#include <stdio.h>
/**
 *main - print 50 fibonacci numbers
 *Return:0 sucess
 */
int main(void)
{
	long int n;
	long int m;
	long int p = 1;
	long int q = 0;

	for (m = 0; m < 50; m++)
	{
		printf("%ld", n = p + q);
		q = p;
		p = n;
		if (n == 20365011074)
		{
		}
		else
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
