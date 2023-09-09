#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - prints if number is positive, zero or négative
*Return : Always  (Success)
*
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positif \n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero \n", n);
	}
	else
	{
		printf("%d is negatif", n);
	}
	return (0);
}


















