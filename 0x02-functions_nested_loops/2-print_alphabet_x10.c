#include "main.h"
/**
* print _alphabet_x10 - make alphabet 10 times
* Return: always (0)
*/
void print_alphabet_x10(void)
{
	char ch;
	int i;

	i = 0;
	while (i < 10)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
		i++;
	}
}
