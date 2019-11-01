#include <stdio.h>
#include "lists.h"
/**
 *beforem - print  string before main
 */
void beforem(void) __attribute__ ((constructor));

void beforem(void)
{
	printf("You're beat! and yet, you must allow,\n"
	       "I bore my house upon my back!\n");
}
