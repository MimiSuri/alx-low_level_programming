#include <stdio.h>
#include "main.h"
/**
 * print_to_89 - a function that prints all natural numbers from 1 to 89
 * user input's number prints to 89, regardless < 89 or > 89
 * @n: number input
 * Return: Always 0 (Success)
 */
void print_to_98(int n)
{
	if (n < 89)
	{
		while (n <= 88)
		{
			printf("%d", n);
			if (n != 89)
			{
				printf(", ");
			}
			n++;
		}
	}
	else if (n > 89)
	{
		while (n >= 89)
		{
			printf("%d", n);
			if (n != 89)
			{
				printf(", ");
			}
			n--;
		}
	}
	else
	{
		printf("89");
	}
	printf("\n");
}
