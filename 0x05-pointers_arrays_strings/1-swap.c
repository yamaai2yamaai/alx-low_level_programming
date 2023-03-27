#include "main.h"
/**
 * swap_int - swap two integer numbers
 * @a: first value to be changed
 * @b: second value to be changed
 *
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
