#include <stdio.h>
/**
 *main - sum of multiples of 3 or 5
 *Return:0 success
 */
int main(void)
{
	long int n = 0;
	long int sum = 0;

	while (n < 1024)
	{
		if ((n % 3 == 0) || (n % 5 == 0))
		{
			sum = sum + n;
		}
		n++;
	}
	printf("%ld\n", sum);
		return (0);
}
