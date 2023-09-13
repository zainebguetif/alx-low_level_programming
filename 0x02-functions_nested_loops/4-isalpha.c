#include "main.h"
/**
* _isalpha - checks for alohabetic charate
* @c: character to be chacked
* Return:1 if character is a letter, 0 otherwis
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
		return (0);
}
