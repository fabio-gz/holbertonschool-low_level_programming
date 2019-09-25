#include <stdio.h>
/**
 *main - print fibonacci numbers until 4million
 *Return:0 sucess
 */
int main(void)
{
	long int n;
	long int m;
	long int p = 1;
	long int q = 0;
	long int r = 0;

	for (m = 0; m < 50; m++)
	{
		n = p + q;
		q = p;
		p = n;
		if (n % 2 == 0 && n < 4000000)
		{
			r = r + n;
		}

	}
	printf("%ld", r);
	printf("\n");
	return (0);
}
