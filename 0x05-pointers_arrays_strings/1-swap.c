#include "main.h"
#include <unistd>
/**
 * swap_int - swaps the volumes of the integers
 * @a: integer to swap
 * @b: integer to swap
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
