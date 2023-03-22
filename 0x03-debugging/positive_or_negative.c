nclude "main.h"

/**
 * positive_or_negative.c - check positive or negative numbers
 *
 * return : Always 0
 */

void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive", i);
	else if (i < 0)
		printf("%d is negative", i);
	else 
		printf("%d is zero", i);
}
