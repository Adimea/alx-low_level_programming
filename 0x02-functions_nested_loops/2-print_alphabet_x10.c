#include "main.h"

/**
 * print_alphabet_x10 - print alphabet 10 times
 */

void print_alphabet_x10(void)
{
	int ten;

	char da;

	for (ten = 0; ten <= 9; ten++)
	{
		for (da = 'a'; da <= 'z'; da++)
			_putchar(da);
	_putchar('\n')
	}
}
