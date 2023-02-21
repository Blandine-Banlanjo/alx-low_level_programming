#include "main.h"
#include <stdio.h>
/**
 * _abs - compute the absolute value of an interger
 *
 * @a: number whose absolute value is to be found
 *
 * Return: Absolute value of the number
 */
int _abs(int a)
{
	if (a < 0)
		a *= -1;
	return (a);
}
