#include "main.h"

/**
 * _islower - check the main code.
 * @c: character to test.
 *
 * Return: Always 0.
 */
int main(void)
{
	int r;
	
	r = _islower('H');
	_putchar(r + '0');
	r = _islower('o');
	_putchar(r - '0');
	r = _islower(108);
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}

