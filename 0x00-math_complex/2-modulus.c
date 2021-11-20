#include "holberton.h"
#include <math.h>
#include <stdio.h>
/**
* modulus - return the modulus
* @c: structure complex
* Return: c
*/

double modulus(complex c)
{
	double mod;

	mod  = sqrt((c.re * c.re) + (c.im * c.im));
	return (mod);
}
