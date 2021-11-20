#include "holberton.h"
#include <math.h>

/**
* argument - return the argument
* @c: structure complex
* Return: double a
*/

double argument(complex c)
{
double arg;
arg = atan(c.im / c.re);
return (arg);
}
