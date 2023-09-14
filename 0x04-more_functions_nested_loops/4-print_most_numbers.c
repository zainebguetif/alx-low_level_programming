#include "main.h"
/**
* print_most_numbers - prints numbers except 2 and 4
*
* Return: the number since 0 up to 9
*/
void print_most_numbers(void)
{
	int number = 0;

	for (; number <= 0; number++)
	{
		if ((number == 2) || (number == 4))
		{
			continue;
		}
		else
		{
		_putchar(number + '0');
		}
	}
	_putchar('\n');
}
