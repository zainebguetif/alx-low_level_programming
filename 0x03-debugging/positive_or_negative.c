#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * positive_or_negative - print a number
 *@i: integer
 * Description: Get a random number and print the number
 * and if it is positive, negative, or zero
 * Return: 0
 */
void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is zero\n", i);

	return (0);
}
